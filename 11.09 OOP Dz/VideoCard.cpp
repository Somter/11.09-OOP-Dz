#include <iostream>
#include "VideoCard.h"
using namespace std;	
VideoCard::VideoCard(const char* nameCr)
{
	name_card = new char[strlen(nameCr) + 1];	
	strcpy_s(name_card, strlen(nameCr) + 1, nameCr);	
}

VideoCard::VideoCard(const VideoCard& obj)
{
	name_card = new char[strlen(obj.name_card) + 1];	
	strcpy_s(name_card, strlen(obj.name_card) + 1, obj.name_card);
	cout << "Copy constructor Video Card\n";	
}

void VideoCard::PrintVideoCard()
{
	cout << "Video card: " << name_card << endl;		
}

VideoCard::~VideoCard()
{
	delete[] name_card;	
}
