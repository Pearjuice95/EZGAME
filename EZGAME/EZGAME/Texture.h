#pragma once
#include <windows.h>

static class CTexture
{
public:
	HDC m_TextureDC;
	BITMAP m_BitmapInfo;
	HBITMAP m_NewBitmap;
	HBITMAP m_OldBitmap;

	HDC GetTextureDC();
	void AddTexture(HDC hdc, PTCHAR ImgName);
	void Release();

	CTexture(void);
	~CTexture(void);
};
