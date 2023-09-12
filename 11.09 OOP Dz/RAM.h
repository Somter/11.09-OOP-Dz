#pragma once
class RAM
{
	private:
		char* name_ram;
	public:
		RAM(const char* nameR);	
		RAM(const RAM& obj);	
		void PrintRAM();	
		~RAM();
};

