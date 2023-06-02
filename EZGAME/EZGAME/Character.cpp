#include "Character.h"
#include "Time.h"
#include "Player.h"
#include "Collider.h"
#include "Sound.h"

static int p1frame = 0;
static float p1time = 0.0f;
extern HWND g_hWnd;
extern Player p1;
extern Player p2;
extern PlayerCollider p1Col;
extern PlayerCollider p2Col;
extern WallCollider LFWALL;
extern WallCollider RTWALL;
extern WallCollider UPWALL;
extern WallCollider DNWALL;

extern int g_GameStatus;
extern bool g_IsP1Left;

bool g_p1ready = false;
bool g_p2ready = false;
bool g_p1end = false;
bool g_p2end = false;


void WhosLeft()
{
	if (p1.playerpoint.x > p2.playerpoint.x)
	{
		g_IsP1Left = false;
	}

	else
	{
		g_IsP1Left = true;
	}
}

void AniPlay1P(HDC hdc)
{
	int px, py;

	if (g_IsP1Left == false)
	{
		switch (p1.status)
		{
		case 1:
		{
			px = p1.BJUMP->BmpX;
			py = p1.BJUMP->BmpY;
		}
		break;

		case 2:
		{
			px = p1.IDLE->BmpX;
			py = p1.IDLE->BmpY;
		}
		break;

		//case 3:
		//{
		//	px = p1.INTRO->BmpX;
		//	py = p1.INTRO->BmpY;
		//}
		//break;

		case 4:
		{
			px = p1.JUMP->BmpX;
			py = p1.JUMP->BmpY;
		}
		break;

		/*	case 5:
			{
				px = p1.KICK->BmpX;
				py = p1.KICK->BmpY;
			}
			break;*/

			//case 6:
			//{
			//	px = p1.LOSE->BmpX;
			//	py = p1.LOSE->BmpY;
			//}
			//break;

	/*		case 7:
			{
				px = p1.WIN->BmpX;
				py = p1.WIN->BmpY;
			}*/

		case 8:
		{
			px = p1.JUMP->BmpX;
			py = p1.JUMP->BmpY;
		}
		break;

		/*	case 9:
			{
				px = p1.KICK->BmpX;
				py = p1.KICK->BmpY;
			}
			break;

			case 10:
			{
				px = p1.KICK->BmpX;
				py = p1.KICK->BmpY;
			}
			break;*/

		case 11:
		{
			px = p1.BJUMP->BmpX;
			py = p1.BJUMP->BmpY;
		}
		break;
		}
	}

	else if (g_IsP1Left == true)
	{
		switch (p1.status)
		{
		case 1:
		{
			px = p1.BJUMPM->BmpX;
			py = p1.BJUMPM->BmpY;
		}
		break;

		case 2:
		{
			px = p1.IDLEM->BmpX;
			py = p1.IDLEM->BmpY;
		}
		break;

		//case 3:
		//{
		//	px = p1.INTROM->BmpX;
		//	py = p1.INTROM->BmpY;
		//}
		//break;

		case 4:
		{
			px = p1.JUMPM->BmpX;
			py = p1.JUMPM->BmpY;
		}
		break;

		//case 5:
		//{
		//	px = p1.KICKM->BmpX;
		//	py = p1.KICKM->BmpY;
		//}
		//break;

		/*		case 6:
				{
					px = p1.LOSEM->BmpX;
					py = p1.LOSEM->BmpY;
				}
				break;*/

				/*		case 7:
						{
							px = p1.WINM->BmpX;
							py = p1.WINM->BmpY;
						}*/

		case 8:
		{
			px = p1.JUMPM->BmpX;
			py = p1.JUMPM->BmpY;
		}
		break;

		/*case 9:
		{
			px = p1.KICKM->BmpX;
			py = p1.KICKM->BmpY;
		}
		break;

		case 10:
		{
			px = p1.KICKM->BmpX;
			py = p1.KICKM->BmpY;
		}
		break;*/

		case 11:
		{
			px = p1.BJUMPM->BmpX;
			py = p1.BJUMPM->BmpY;
		}
		break;
		}
	}

	if (g_IsP1Left == false)
	{
		switch (p1.status)
		{
		case 1:
		{
			p1.current = p1.BJUMP;
		}
		break;

		case 2:
		{
			p1.current = p1.IDLE;
		}
		break;

		/*	case 3:
			{
				p1.current = p1.INTRO;
			}
			break;*/

		case 4:
		{
			p1.current = p1.JUMP;
		}
		break;

		/*case 5:
		{
			p1.current = p1.KICK;
		}
		break;*/

		/*		case 6:
				{
					p1.current = p1.LOSE;
				}
				break;*/

				/*		case 7:
						{
							p1.current = p1.WIN;
						}*/

		case 8:
		{
			p1.current = p1.JUMP;
		}
		break;

		/*case 9:
		{
			p1.current = p1.current;
		}
		break;

		case 10:
		{
			p1.current = p1.current;
		}
		break;*/

		case 11:
		{
			p1.current = p1.BJUMP;
		}
		break;
		}
	}

	else if (g_IsP1Left == true)
	{
		switch (p1.status)
		{
		case 1:
		{
			p1.current = p1.BJUMPM;
		}
		break;

		case 2:
		{
			p1.current = p1.IDLEM;
		}
		break;

		/*	case 3:
			{
				p1.current = p1.INTROM;
			}
			break;*/

		case 4:
		{
			p1.current = p1.JUMPM;
		}
		break;

		/*	case 5:
			{
				p1.current = p1.KICKM;
			}
			break;*/

			/*	case 6:
				{
					p1.current = p1.LOSEM;
				}
				break;*/

				/*	case 7:
					{
						p1.current = p1.WINM;
					}*/

		case 8:
		{
			p1.current = p1.JUMPM;
		}
		break;

		/*	case 9:
			{
				p1.current = p1.current;
			}
			break;

			case 10:
			{
				p1.current = p1.current;
			}
			break;*/

		case 11:
		{
			p1.current = p1.BJUMPM;
		}
		break;
		}
	}

	p1Col.mx = px;
	p1Col.my = py;
	p1Col.m_point.x = p1.playerpoint.x;
	p1Col.m_point.y = p1.playerpoint.y;

	p1Col.m_Collider = { p1Col.m_point.x, p1Col.m_point.y - py, p1Col.m_point.x + px, p1Col.m_point.y };


	p1.current->Current_Frame += 1;

	//if (p1.status == 3 && p1.current->Total_Frame <= p1.current->Current_Frame)
	//{
	//	p1.status = 2;
	//}

	if (p1.current->Total_Frame <= p1.current->Current_Frame)
	{
		p1.current->Current_Frame = 0;
	}

	int Animation_Total_Cut = p1.current->Play_Bitmap_List.size();

	int Animation_Current_Cut = p1.current->Current_Frame / (p1.current->Total_Frame / (float)Animation_Total_Cut);

	//Rectangle(hdc, p1Col.m_point.x - 1, p1Col.m_point.y - (py - 1), p1Col.m_point.x + (px + 1), p1Col.m_point.y + 1);
	TransparentBlt(hdc, p1.playerpoint.x, (p1.playerpoint.y - py), px, py, p1.current->Play_Bitmap_List[Animation_Current_Cut]->GetTextureDC(), 0, 0, px, py, RGB(0, 255, 0));
}

void AniPlay2P(HDC hdc)
{
	int px, py;

	if (g_IsP1Left == true)
	{
		switch (p2.status)
		{
		case 1:
		{
			px = p2.BJUMP->BmpX;
			py = p2.BJUMP->BmpY;
		}
		break;

		case 2:
		{
			px = p2.IDLE->BmpX;
			py = p2.IDLE->BmpY;
		}
		break;

		/*	case 3:
			{
				px = p2.INTRO->BmpX;
				py = p2.INTRO->BmpY;
			}
			break;*/

		case 4:
		{
			px = p2.JUMP->BmpX;
			py = p2.JUMP->BmpY;
		}
		break;

		/*	case 5:
			{
				px = p2.KICK->BmpX;
				py = p2.KICK->BmpY;
			}
			break;*/

			/*	case 6:
				{
					px = p2.LOSE->BmpX;
					py = p2.LOSE->BmpY;
				}
				break;

				case 7:
				{
					px = p2.WIN->BmpX;
					py = p2.WIN->BmpY;
				}
				break;*/

		case 8:
		{
			px = p2.JUMP->BmpX;
			py = p2.JUMP->BmpY;
		}
		break;

		/*	case 9:
			{
				px = p2.KICK->BmpX;
				py = p2.KICK->BmpY;
			}
			break;

			case 10:
			{
				px = p2.KICK->BmpX;
				py = p2.KICK->BmpY;
			}
			break;*/

		case 11:
		{
			px = p2.BJUMP->BmpX;
			py = p2.BJUMP->BmpY;
		}
		break;

		}
	}

	else if (g_IsP1Left == false)
	{
		switch (p2.status)
		{
		case 1:
		{
			px = p2.BJUMPM->BmpX;
			py = p2.BJUMPM->BmpY;
		}
		break;

		case 2:
		{
			px = p2.IDLEM->BmpX;
			py = p2.IDLEM->BmpY;
		}
		break;

		/*	case 3:
			{
				px = p2.INTROM->BmpX;
				py = p2.INTROM->BmpY;
			}
			break;*/

		case 4:
		{
			px = p2.JUMPM->BmpX;
			py = p2.JUMPM->BmpY;
		}
		break;

		/*case 5:
		{
			px = p2.KICKM->BmpX;
			py = p2.KICKM->BmpY;
		}
		break;*/

		/*case 6:
		{
			px = p2.LOSEM->BmpX;
			py = p2.LOSEM->BmpY;
		}
		break;

		case 7:
		{
			px = p2.WINM->BmpX;
			py = p2.WINM->BmpY;
		}
		break;*/

		case 8:
		{
			px = p2.JUMPM->BmpX;
			py = p2.JUMPM->BmpY;
		}
		break;

		/*case 9:
		{
			px = p2.KICKM->BmpX;
			py = p2.KICKM->BmpY;
		}
		break;

		case 10:
		{
			px = p2.KICKM->BmpX;
			py = p2.KICKM->BmpY;
		}
		break;*/

		case 11:
		{
			px = p2.BJUMPM->BmpX;
			py = p2.BJUMPM->BmpY;
		}
		break;
		}
	}


	if (g_IsP1Left == true)
	{
		switch (p2.status)
		{
		case 1:
		{
			p2.current = p2.BJUMP;
		}
		break;

		case 2:
		{
			p2.current = p2.IDLE;
		}
		break;

		/*case 3:
		{
			p2.current = p2.INTRO;
		}
		break;*/

		case 4:
		{
			p2.current = p2.JUMP;
		}
		break;

		/*case 5:
		{
			p2.current = p2.KICK;
		}
		break;*/

		/*case 6:
		{
			p2.current = p2.LOSE;
		}
		break;

		case 7:
		{
			p2.current = p2.WIN;
		}
		break;*/

		case 8:
		{
			p2.current = p2.JUMP;
		}
		break;

		/*case 9:
		{
			p2.current = p2.current;
		}
		break;

		case 10:
		{
			p2.current = p2.current;
		}
		break;*/

		case 11:
		{
			p2.current = p2.BJUMP;
		}
		break;
		}
	}

	else if (g_IsP1Left == false)
	{
		switch (p2.status)
		{
		case 1:
		{
			p2.current = p2.BJUMPM;
		}
		break;

		case 2:
		{
			p2.current = p2.IDLEM;
		}
		break;

		/*case 3:
		{
			p2.current = p2.INTROM;
		}
		break;*/

		case 4:
		{
			p2.current = p2.JUMPM;
		}
		break;

		//case 5:
		//{
		//	p2.current = p2.KICKM;
		//}
		//break;

		/*case 6:
		{
			p2.current = p2.LOSEM;
		}
		break;

		case 7:
		{
			p2.current = p2.WINM;
		}
		break;*/

		case 8:
		{
			p2.current = p2.JUMPM;
		}
		break;

		/*case 9:
		{
			p2.current = p2.current;
		}
		break;

		case 10:
		{
			p2.current = p2.current;
		}
		break;*/

		case 11:
		{
			p2.current = p2.BJUMPM;
		}
		break;
		}
	}


	p2Col.mx = px;
	p2Col.my = py;

	p2Col.m_point.x = p2.playerpoint.x;
	p2Col.m_point.y = p2.playerpoint.y;

	p2Col.m_Collider = { p2Col.m_point.x, p2Col.m_point.y - py, p2Col.m_point.x + px, p2Col.m_point.y };

	p2.current->Current_Frame += 1;

	if (p2.status == 3 && p2.current->Total_Frame <= p2.current->Current_Frame)
	{
		p2.status = 2;
	}

	if (p2.current->Total_Frame <= p2.current->Current_Frame)
	{
		p2.current->Current_Frame = 0;
	}

	int Animation_Total_Cut = p2.current->Play_Bitmap_List.size();

	int Animation_Current_Cut = p2.current->Current_Frame / (p2.current->Total_Frame / (float)Animation_Total_Cut);

	//Rectangle(hdc, p2Col.m_point.x - 1, p2Col.m_point.y - py - 1, p2Col.m_point.x + px + 1, p2Col.m_point.y + 1);
	TransparentBlt(hdc, p2.playerpoint.x, (p2.playerpoint.y - py), px, py, p2.current->Play_Bitmap_List[Animation_Current_Cut]->GetTextureDC(), 0, 0, px, py, RGB(0, 255, 0));
}

bool readyswitch = false;
extern bool goswitch;

void PlayIntro(HDC hdc)
{
	if (readyswitch == false)
	{
		SoundPlay(31);
		readyswitch = true;
		goswitch = false;
	}

	int px1, py1;
	int px2, py2;

	// 김갑환 2P 인트로 애니메이션 중심점 보정
	if (p2.characterID == 4)
	{
		p2.playerpoint.x = 660 - (p2.IDLE->BmpX * 2);
	}

	px1 = p1.INTROM->BmpX;
	py1 = p1.INTROM->BmpY;

	px2 = p2.INTRO->BmpX;
	py2 = p2.INTRO->BmpY;

	p1.current = p1.INTROM;
	p2.current = p2.INTRO;

	p1.current->Current_Frame += 1;
	p2.current->Current_Frame += 1;

	if (p1.current->Total_Frame <= p1.current->Current_Frame)
	{
		p1.current = p1.IDLEM;
		g_p1ready = true;
	}

	if (p2.current->Total_Frame <= p2.current->Current_Frame)
	{
		p2.current = p2.IDLE;
		g_p2ready = true;
	}

	int Animation_Total_Cut1 = p1.current->Play_Bitmap_List.size();
	int Animation_Current_Cut1 = p1.current->Current_Frame / (p1.current->Total_Frame / (float)Animation_Total_Cut1);

	int Animation_Total_Cut2 = p2.current->Play_Bitmap_List.size();
	int Animation_Current_Cut2 = p2.current->Current_Frame / (p2.current->Total_Frame / (float)Animation_Total_Cut2);
	TransparentBlt(hdc, p1.playerpoint.x, (p1.playerpoint.y - py1), px1, py1, p1.current->Play_Bitmap_List[Animation_Current_Cut1]->GetTextureDC(), 0, 0, px1, py1, RGB(0, 255, 0));
	TransparentBlt(hdc, p2.playerpoint.x, (p2.playerpoint.y - py2), px2, py2, p2.current->Play_Bitmap_List[Animation_Current_Cut2]->GetTextureDC(), 0, 0, px2, py2, RGB(0, 255, 0));

	if (g_p1ready == true && g_p2ready == true)
	{
		p1.status = 2;
		p2.status = 2;
		g_GameStatus++;
		g_p1ready = false;
		g_p2ready = false;
		readyswitch = false;

		if (p2.characterID == 4)
		{
			p2.playerpoint.x = 874 - (p2.IDLE->BmpX * 2);
		}
	}
}

void PlayEnding(HDC hdc)
{
	int px1, py1, px2, py2;

	if (g_IsP1Left == true)
	{
		switch (p1.status)
		{
		case 6:
		{
			px1 = p1.LOSEM->BmpX;
			py1 = p1.LOSEM->BmpY;
		}
		break;

		case 7:
		{
			px1 = p1.WINM->BmpX;
			py1 = p1.WINM->BmpY;
		}
		break;
		}

		switch (p2.status)
		{
		case 6:
		{
			px2 = p2.LOSE->BmpX;
			py2 = p2.LOSE->BmpY;
		}
		break;

		case 7:
		{
			px2 = p2.WIN->BmpX;
			py2 = p2.WIN->BmpY;
		}
		break;
		}
	}

	else if (g_IsP1Left == false)
	{
		switch (p1.status)
		{
		case 6:
		{
			px1 = p1.LOSE->BmpX;
			py1 = p1.LOSE->BmpY;
		}
		break;

		case 7:
		{
			px1 = p1.WIN->BmpX;
			py1 = p1.WIN->BmpY;
		}
		break;
		}

		switch (p2.status)
		{
		case 6:
		{
			px2 = p2.LOSEM->BmpX;
			py2 = p2.LOSEM->BmpY;
		}
		break;

		case 7:
		{
			px2 = p2.WINM->BmpX;
			py2 = p2.WINM->BmpY;
		}
		break;
		}
	}

	if (g_IsP1Left == true)
	{
		switch (p1.status)
		{
		case 6:
		{
			p1.current = p1.LOSEM;
		}
		break;

		case 7:
		{
			p1.current = p1.WINM;
		}
		break;
		}

		switch (p2.status)
		{
		case 6:
		{
			p2.current = p2.LOSE;
		}
		break;

		case 7:
		{
			p2.current = p2.WIN;
		}
		break;
		}
	}

	else if (g_IsP1Left == false)
	{
		switch (p1.status)
		{
		case 6:
		{
			p1.current = p1.LOSE;
		}
		break;

		case 7:
		{
			p1.current = p1.WIN;
		}
		break;
		}

		switch (p2.status)
		{
		case 6:
		{
			p2.current = p2.LOSEM;
		}
		break;

		case 7:
		{
			p2.current = p2.WINM;
		}
		break;
		}
	}

	p1.current->Current_Frame += 1;
	p2.current->Current_Frame += 1;

	if (p1.current->Total_Frame <= p1.current->Current_Frame)
	{
		p1.current->Current_Frame = p1.current->Total_Frame - 1;
		g_p1end = true;
	}

	if (p2.current->Total_Frame <= p2.current->Current_Frame)
	{
		p2.current->Current_Frame = p2.current->Total_Frame - 1;
		g_p2end = true;
	}

	int Animation_Total_Cut1 = p1.current->Play_Bitmap_List.size();
	int Animation_Current_Cut1 = p1.current->Current_Frame / (p1.current->Total_Frame / (float)Animation_Total_Cut1);

	int Animation_Total_Cut2 = p2.current->Play_Bitmap_List.size();
	int Animation_Current_Cut2 = p2.current->Current_Frame / (p2.current->Total_Frame / (float)Animation_Total_Cut2);




	if (p1.status == 6 && g_IsP1Left == true && g_p1end == false)
	{
		if (p1.playerpoint.y < 700)
		{
			if (p1.playerpoint.x < 4)
			{
				p1.playerpoint.y += 4;
			}

			else
			{
				p1.playerpoint.y += 4;
				p1.playerpoint.x += 4;
			}
		}

		else if (p1.playerpoint.y >= 700)
		{
			if (p1.playerpoint.x < 4)
			{

			}

			else
			{
				p1.playerpoint.x -= 4;
			}
		}
	}

	else if (p1.status == 6 && g_IsP1Left == false && g_p1end == false)
	{
		if (p1.playerpoint.y < 700)
		{
			if (p1.playerpoint.x + p1.current->BmpX > 1020)
			{
				p1.playerpoint.y += 4;
			}

			else
			{
				p1.playerpoint.y += 4;
				p1.playerpoint.x -= 4;
			}
		}

		else if (p1.playerpoint.y >= 700)
		{
			if (p1.playerpoint.x + p1.current->BmpX > 1020)
			{

			}

			else
			{
				p1.playerpoint.x += 4;
			}
		}
	}


	if (p2.status == 6 && g_IsP1Left == false && g_p2end == false)
	{
		if (p2.playerpoint.y < 700)
		{
			if (p2.playerpoint.x < 4)
			{
				p2.playerpoint.y += 4;
			}

			else
			{
				p2.playerpoint.y += 4;
				p2.playerpoint.x += 4;
			}
		}

		else if (p2.playerpoint.y >= 700)
		{
			if (p2.playerpoint.x < 4)
			{

			}

			else
			{
				p2.playerpoint.x -= 4;
			}
		}
	}

	else if (p2.status == 6 && g_IsP1Left == true && g_p2end == false)
	{
		if (p2.playerpoint.y < 700)
		{
			if (p2.playerpoint.x + p2.current->BmpX > 1020)
			{
				p2.playerpoint.y += 4;
			}

			else
			{
				p2.playerpoint.y += 4;
				p2.playerpoint.x += 4;
			}
		}

		else if (p2.playerpoint.y >= 700)
		{
			if (p2.playerpoint.x + p2.current->BmpX > 1020)
			{

			}

			else
			{
				p2.playerpoint.x += 4;
			}
		}
	}



	p1.INTROM->Current_Frame = 0;
	p2.INTRO->Current_Frame = 0;
	TransparentBlt(hdc, p1.playerpoint.x, (p1.playerpoint.y - py1), px1, py1, p1.current->Play_Bitmap_List[Animation_Current_Cut1]->GetTextureDC(), 0, 0, px1, py1, RGB(0, 255, 0));
	TransparentBlt(hdc, p2.playerpoint.x, (p2.playerpoint.y - py2), px2, py2, p2.current->Play_Bitmap_List[Animation_Current_Cut2]->GetTextureDC(), 0, 0, px2, py2, RGB(0, 255, 0));
}

void KickAni1P(HDC hdc)
{
	int px, py;

	if (g_IsP1Left == true)
	{
		px = p1.KICKM->BmpX;
		py = p1.KICKM->BmpY;

		if (p1.status == 5)
			p1.current = p1.KICKM;
	}

	else if (g_IsP1Left == false)
	{
		px = p1.KICK->BmpX;
		py = p1.KICK->BmpY;

		if (p1.status == 5)
			p1.current = p1.KICK;
	}

	p1Col.mx = px;
	p1Col.my = py;
	p1Col.m_point.x = p1.playerpoint.x;
	p1Col.m_point.y = p1.playerpoint.y;

	switch (p1.characterID)
	{
	case 1:
		p1Col.m_Collider = { p1Col.m_point.x + 5 , p1Col.m_point.y - py, p1Col.m_point.x + px - 5, p1Col.m_point.y - 15 };
		break;

	case 2:
		p1Col.m_Collider = { p1Col.m_point.x + 30 , p1Col.m_point.y - py, p1Col.m_point.x + px - 30, p1Col.m_point.y - 5 };
		break;

	case 3:
		p1Col.m_Collider = { p1Col.m_point.x + 10 , p1Col.m_point.y - py, p1Col.m_point.x + px - 10, p1Col.m_point.y - 30 };
		break;

	case 4:
		p1Col.m_Collider = { p1Col.m_point.x , p1Col.m_point.y - py, p1Col.m_point.x + px, p1Col.m_point.y };
		break;

	case 5:
		p1Col.m_Collider = { p1Col.m_point.x  , p1Col.m_point.y - py, p1Col.m_point.x + px , p1Col.m_point.y - 15 };
		break;

	case 6:
		p1Col.m_Collider = { p1Col.m_point.x , p1Col.m_point.y - py, p1Col.m_point.x + px, p1Col.m_point.y - 15 };
		break;
	}
	//p1Col.m_Collider = { p1Col.m_point.x, p1Col.m_point.y - py, p1Col.m_point.x + px, p1Col.m_point.y };
	p1.current->Current_Frame += 1;

	if (p1.characterID != 4)
	{
		if (p1.current->Total_Frame <= p1.current->Current_Frame)
		{
			p1.current->Current_Frame = p1.current->Total_Frame - 1;
		}
	}

	else if (p1.characterID == 4)
	{
		if (p1.current->Total_Frame <= p1.current->Current_Frame)
		{
			p1.current->Current_Frame = 0;
		}
	}
	int Animation_Total_Cut = p1.current->Play_Bitmap_List.size();

	int Animation_Current_Cut = p1.current->Current_Frame / (p1.current->Total_Frame / (float)Animation_Total_Cut);

	TransparentBlt(hdc, p1.playerpoint.x, (p1.playerpoint.y - py), px, py, p1.current->Play_Bitmap_List[Animation_Current_Cut]->GetTextureDC(), 0, 0, px, py, RGB(0, 255, 0));

}

void KickAni2P(HDC hdc)
{
	int px, py;

	if (g_IsP1Left == true)
	{
		px = p2.KICK->BmpX;
		py = p2.KICK->BmpY;

		if (p2.status == 5)
			p2.current = p2.KICK;
	}

	else if (g_IsP1Left == false)
	{
		px = p2.KICKM->BmpX;
		py = p2.KICKM->BmpY;

		if (p2.status == 5)
			p2.current = p2.KICKM;
	}

	p2Col.mx = px;
	p2Col.my = py;
	p2Col.m_point.x = p2.playerpoint.x;
	p2Col.m_point.y = p2.playerpoint.y;

	p2Col.m_Collider = { p2Col.m_point.x, p2Col.m_point.y - py, p2Col.m_point.x + px, p2Col.m_point.y };
	p2.current->Current_Frame += 1;

	if (p2.characterID != 4)
	{
		if (p2.current->Total_Frame <= p2.current->Current_Frame)
		{
			p2.current->Current_Frame = p2.current->Total_Frame - 1;
		}
	}

	else if (p2.characterID == 4)
	{
		if (p2.current->Total_Frame <= p2.current->Current_Frame)
		{
			p2.current->Current_Frame = 0;
		}
	}

	int Animation_Total_Cut = p2.current->Play_Bitmap_List.size();

	int Animation_Current_Cut = p2.current->Current_Frame / (p2.current->Total_Frame / (float)Animation_Total_Cut);

	TransparentBlt(hdc, p2.playerpoint.x, (p2.playerpoint.y - py), px, py, p2.current->Play_Bitmap_List[Animation_Current_Cut]->GetTextureDC(), 0, 0, px, py, RGB(0, 255, 0));
}