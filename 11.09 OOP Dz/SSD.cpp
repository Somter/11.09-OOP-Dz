#include<iostream>
#include "SSD.h"
using namespace std;	
SSD::SSD(const char* nameS)
{
	name_ssd = new char[strlen(nameS) + 1];	
	strcpy_s(name_ssd, strlen(nameS) + 1, nameS);	
}

SSD::SSD(const SSD& obj)
{
	name_ssd = new char[strlen(obj.name_ssd)+1];
	strcpy_s(name_ssd, strlen(obj.name_ssd)+1, obj.name_ssd);	
	cout << "Copy constructor SSD\n";
}

void SSD::PrintSsd()
{
	cout << "SSD: " << name_ssd << endl;	
}

SSD::~SSD()
{
	delete[] name_ssd;	
}
