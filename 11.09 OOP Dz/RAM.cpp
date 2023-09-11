#include <iostream>		
#include "RAM.h"	
using namespace std;
RAM::RAM(const char* nameR)
{
	name_ram = new char[strlen(nameR) + 1];
	strcpy_s(name_ram, strlen(nameR) + 1, nameR);	
}	

void RAM::PrintRAM()
{
	cout << "RAM: " << name_ram << endl;		
}

RAM::~RAM()	
{
	delete[] name_ram;		
}
