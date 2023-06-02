#pragma once

/*
	1. 애니메이션 재생에 필요한 비트맵들
	2. 총 재생 시간 (총 프레임)
*/
#include <vector>
#include "Texture.h"

static struct Animation
{
	Animation() 
	{
		Current_Frame = 0.f;
		Total_Frame = 0.f;
		BmpX = 0;
		BmpY = 0;
	}

	float Current_Frame;
	float Total_Frame;
	std::vector<CTexture*> Play_Bitmap_List;
	int BmpY; 
	int BmpX;
	int hitCollX;
	int hitCollY;
	int kickCollX;
	int kickCollY;
	//BITMAP m_VectorInfo;
};
