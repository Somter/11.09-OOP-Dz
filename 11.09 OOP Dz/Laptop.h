#pragma once
#include "CPU.h"
#include "SSD.h"	
#include "VideoCard.h"	
#include "RAM.h"	
class Laptop
{
private:
	char* model;
	char* color;
	double price;	
	CPU cpu;	
	SSD ssd;	
	VideoCard vc;
	RAM ram;
	int static Count;	
public:		
	Laptop(const char* nameL, const char* colorL, double price, const char* nameC, const char* nameS, const char* nameCr, const char* nameR);
	Laptop(const Laptop& obj);	
	void PrintLaptop();	
	static int GetCount();	
	~Laptop();	
};

	