#pragma once
class CPU
{
private:
	char* name_cpu;
public:
	CPU(const char* nameC);
	CPU(const CPU& obj);		
	void PrintCPU();	
	~CPU();	
};

