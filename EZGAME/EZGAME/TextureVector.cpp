#include "Character.h"
#include "Texture.h"
extern Animation g_BackGround;

void LoadImageToAni(const char* ImgName, Animation& _Anime, const int& count, HDC hdc)
{
	TCHAR szImgName[128];

	for (int i = 0; i <= count; ++i)
	{
		wsprintf(szImgName, ImgName, i);

		CTexture* pTexture = new CTexture;
		pTexture->AddTexture(hdc, szImgName);

		_Anime.Play_Bitmap_List.push_back(pTexture);
	}

	_Anime.BmpX = _Anime.Play_Bitmap_List[0]->m_BitmapInfo.bmWidth;
	_Anime.BmpY = _Anime.Play_Bitmap_List[0]->m_BitmapInfo.bmHeight;
}

void LoadMap(HDC hdc)
{
	g_BackGround.Current_Frame += 1;

	if (g_BackGround.Total_Frame <= g_BackGround.Current_Frame)
	{
		g_BackGround.Current_Frame = 0;
	}

	int Animation_Total_Cut = g_BackGround.Play_Bitmap_List.size();

	int Animation_Current_Cut = g_BackGround.Current_Frame / (g_BackGround.Total_Frame / (float)Animation_Total_Cut);

	BitBlt(hdc, 0, 0, 1024, 768, g_BackGround.Play_Bitmap_List[Animation_Current_Cut]->GetTextureDC(), 0, 0, SRCCOPY);
}
