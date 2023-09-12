#pragma once
class SSD
{
private:
	char* name_ssd;
public:
	SSD(const char* nameS);	
	SSD(const SSD& obj);	
	void PrintSsd();
	~SSD();
};

