#include "Select.h"
#include "Player.h"

extern Player p1;
extern Player p2;

void DrawSelect(HDC hdc)
{
	CTexture Akuma, Haohmaru, Iori, Kim, Nanaya, Ryu, bg, P1rec, P2rec, P3rec;
	TCHAR name[128];

	wsprintf(name, "Bmp/Select/Akuma.bmp");
	Akuma.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/Haohmaru.bmp");
	Haohmaru.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/Iori.bmp");
	Iori.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/Kim.bmp");
	Kim.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/Nanaya.bmp");
	Nanaya.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/Ryu.bmp");
	Ryu.AddTexture(hdc, name);

	wsprintf(name, "UI/bg.bmp");
	bg.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/P1rec.bmp");
	P1rec.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/P2rec.bmp");
	P2rec.AddTexture(hdc, name);

	wsprintf(name, "Bmp/Select/P3rec.bmp");
	P3rec.AddTexture(hdc, name);

	///*Rectangle(hdc, 290, 200, 440, 400);*/
	//Rectangle(hdc, 440, 200, 590, 400);
	//Rectangle(hdc, 590, 200, 740, 400);
	//Rectangle(hdc, 290, 400, 440, 600);
	//Rectangle(hdc, 440, 400, 590, 600);
	//Rectangle(hdc, 590, 400, 740, 600);


	BitBlt(hdc, 0, 0, bg.m_BitmapInfo.bmWidth, bg.m_BitmapInfo.bmHeight, bg.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 287, 184, Akuma.m_BitmapInfo.bmWidth, Akuma.m_BitmapInfo.bmHeight, Akuma.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 437, 184, Haohmaru.m_BitmapInfo.bmWidth, Haohmaru.m_BitmapInfo.bmHeight, Haohmaru.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 587, 184, Iori.m_BitmapInfo.bmWidth, Iori.m_BitmapInfo.bmHeight, Iori.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 287, 384, Kim.m_BitmapInfo.bmWidth, Kim.m_BitmapInfo.bmHeight, Kim.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 437, 384, Nanaya.m_BitmapInfo.bmWidth, Nanaya.m_BitmapInfo.bmHeight, Nanaya.GetTextureDC(), 0, 0, SRCCOPY);
	BitBlt(hdc, 587, 384, Ryu.m_BitmapInfo.bmWidth, Ryu.m_BitmapInfo.bmHeight, Ryu.GetTextureDC(), 0, 0, SRCCOPY);

	if (p1.selectCursor.x != p2.selectCursor.x || p1.selectCursor.y != p2.selectCursor.y)
	{
		TransparentBlt(hdc, p1.selectCursor.x, p1.selectCursor.y, 150, 200, P1rec.GetTextureDC(), 0, 0, 150, 200, RGB(0, 255, 0));
		TransparentBlt(hdc, p2.selectCursor.x, p2.selectCursor.y, 150, 200, P2rec.GetTextureDC(), 0, 0, 150, 200, RGB(0, 255, 0));
	}

	else if (p1.selectCursor.x == p2.selectCursor.x && p1.selectCursor.y == p2.selectCursor.y)
	{
		TransparentBlt(hdc, p1.selectCursor.x, p1.selectCursor.y, 150, 200, P3rec.GetTextureDC(), 0, 0, 150, 200, RGB(0, 255, 0));
	}

}
