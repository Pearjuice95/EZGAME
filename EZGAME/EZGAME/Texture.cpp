#include "Texture.h"

CTexture::CTexture(void)
{

}

CTexture::~CTexture(void)
{
	Release();
}

HDC CTexture::GetTextureDC()
{
	return m_TextureDC;
}

void CTexture::AddTexture(HDC hdc, PTCHAR ImgName)
{
	m_TextureDC = CreateCompatibleDC(hdc);
	m_NewBitmap = (HBITMAP)LoadImage(NULL, ImgName, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

	SelectObject(m_TextureDC, m_NewBitmap);

	GetObject(m_NewBitmap, sizeof(BITMAP), &m_BitmapInfo);

	if (m_NewBitmap == NULL)
	{

	}
}

void CTexture::Release()
{
	SelectObject(m_TextureDC, m_OldBitmap);
	DeleteDC(m_TextureDC);
	DeleteObject(m_NewBitmap);
	DeleteObject(m_OldBitmap);
}