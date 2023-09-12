#include <iostream>
#include "CPU.h"		
using namespace std;

CPU::CPU(const char* nameC)
{
	name_cpu = new char[strlen(nameC) + 1];
	strcpy_s(name_cpu, strlen(nameC) + 1, nameC);	
}

CPU::CPU(const CPU& obj)	
{
	name_cpu = new char[strlen(obj.name_cpu) + 1];		
	strcpy_s(name_cpu, strlen(obj.name_cpu) + 1, obj.name_cpu);		
	cout << "Copy constructor CPU\n";	
}

void CPU::PrintCPU()
{
	cout << "CPU: " << name_cpu << endl;		
}

CPU::~CPU()
{
	delete[] name_cpu;	
}

