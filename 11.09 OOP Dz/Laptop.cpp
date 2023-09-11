#include <iostream>
#include "Laptop.h"
using namespace std;

Laptop::Laptop(const char* nameL, const char* colorL, double price, const char* nameC, const char* nameS, const char* nameCr, const char* nameR) :cpu(nameC), ssd(nameS), vc(nameCr), ram(nameR)	
{
	model = new char[strlen(nameL) + 1];
	strcpy_s(model, strlen(nameL) + 1, nameL);		

	color = new char[strlen(colorL) + 1];
	strcpy_s(color, strlen(colorL) + 1, colorL);	

	this->price = price;	
	Count++;		
}
	
void Laptop::PrintLaptop()	
{
	cout << "Model: " << model << endl;	
	cout << "Color: " << color << endl;	
	cout << "Price: " << price << endl;	
	cpu.PrintCPU();	
	ssd.PrintSsd();	
	vc.PrintVideoCard();	
	ram.PrintRAM();	
}

int Laptop::GetCount()
{
	return Count;		
}

Laptop::~Laptop()
{
	delete[] model;
	delete[] color;	
}
int Laptop::Count = 0;	