#include<iostream>
#include "SSD.h"
using namespace std;	
SSD::SSD(const char* nameS)
{
	name_ssd = new char[strlen(nameS) + 1];	
	strcpy_s(name_ssd, strlen(nameS) + 1, nameS);	
}

void SSD::PrintSsd()
{
	cout << "SSD: " << name_ssd << endl;	
}

SSD::~SSD()
{
	delete[] name_ssd;	
}
