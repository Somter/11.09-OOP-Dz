#pragma once
class VideoCard
{
private:
	char* name_card;	
public:
	VideoCard(const char* nameCr);	
	VideoCard(const VideoCard& obj);	
	void PrintVideoCard();
	~VideoCard();	
};

