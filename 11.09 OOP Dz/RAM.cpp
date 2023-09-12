#include <iostream>		
#include "RAM.h"	
using namespace std;
RAM::RAM(const char* nameR)
{
	name_ram = new char[strlen(nameR) + 1];
	strcpy_s(name_ram, strlen(nameR) + 1, nameR);	
}
RAM::RAM(const RAM& obj)
{
	name_ram = new char[strlen(obj.name_ram)+1];		
	strcpy_s(name_ram, strlen(obj.name_ram)+1, obj.name_ram);	
	cout << "Copy construcor RAM\n";	
}


void RAM::PrintRAM()
{
	cout << "RAM: " << name_ram << endl;		
}

RAM::~RAM()	
{
	delete[] name_ram;		
}
