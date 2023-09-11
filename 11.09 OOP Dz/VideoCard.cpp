#include <iostream>
#include "VideoCard.h"
using namespace std;	
VideoCard::VideoCard(const char* nameCr)
{
	name_card = new char[strlen(nameCr) + 1];	
	strcpy_s(name_card, strlen(nameCr) + 1, nameCr);	
}

void VideoCard::PrintVideoCard()
{
	cout << "Video card: " << name_card << endl;		
}

VideoCard::~VideoCard()
{
	delete[] name_card;	
}
