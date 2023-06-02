/// winapi 프로젝트
/// 2021.11.17
/// 정해민
///
///

#pragma  comment(lib, "msimg32.lib")
#include <windows.h>
#include "TextureVector.h"
#include "Character.h"
#include "Time.h"
#include "Player.h"
#include "Select.h"
#include "InGame.h"
#include "Collider.h"
#include "Action.h"
#include "Sound.h"

void AnimationInit(HDC hdc)
{
	LoadImageToAni("Bmp/Akuma/BJUMP/%d.bmp", g_Akuma_BJUMP, 8, hdc);
	LoadImageToAni("Bmp/Akuma/IDLE/%d.bmp", g_Akuma_IDLE, 6, hdc);
	LoadImageToAni("Bmp/Akuma/INTRO/%d.bmp", g_Akuma_INTRO, 19, hdc);
	LoadImageToAni("Bmp/Akuma/JUMP/%d.bmp", g_Akuma_JUMP, 8, hdc);
	LoadImageToAni("Bmp/Akuma/KICK/%d.bmp", g_Akuma_KICK, 3, hdc);
	LoadImageToAni("Bmp/Akuma/LOSE/%d.bmp", g_Akuma_LOSE, 10, hdc);
	LoadImageToAni("Bmp/Akuma/WIN/%d.bmp", g_Akuma_WIN, 10, hdc);

	LoadImageToAni("Bmp/Akuma/BJUMPM/%d.bmp", g_Akuma_BJUMPM, 8, hdc);
	LoadImageToAni("Bmp/Akuma/IDLEM/%d.bmp", g_Akuma_IDLEM, 6, hdc);
	LoadImageToAni("Bmp/Akuma/INTROM/%d.bmp", g_Akuma_INTROM, 19, hdc);
	LoadImageToAni("Bmp/Akuma/JUMPM/%d.bmp", g_Akuma_JUMPM, 8, hdc);
	LoadImageToAni("Bmp/Akuma/KICKM/%d.bmp", g_Akuma_KICKM, 3, hdc);
	LoadImageToAni("Bmp/Akuma/LOSEM/%d.bmp", g_Akuma_LOSEM, 10, hdc);
	LoadImageToAni("Bmp/Akuma/WINM/%d.bmp", g_Akuma_WINM, 10, hdc);

	LoadImageToAni("Bmp/Haohmaru/BJUMP/%d.bmp", g_Haohmaru_BJUMP, 7, hdc);
	LoadImageToAni("Bmp/Haohmaru/IDLE/%d.bmp", g_Haohmaru_IDLE, 24, hdc);
	LoadImageToAni("Bmp/Haohmaru/INTRO/%d.bmp", g_Haohmaru_INTRO, 23, hdc);
	LoadImageToAni("Bmp/Haohmaru/JUMP/%d.bmp", g_Haohmaru_JUMP, 9, hdc);
	LoadImageToAni("Bmp/Haohmaru/KICK/%d.bmp", g_Haohmaru_KICK, 5, hdc);
	LoadImageToAni("Bmp/Haohmaru/LOSE/%d.bmp", g_Haohmaru_LOSE, 11, hdc);
	LoadImageToAni("Bmp/Haohmaru/WIN/%d.bmp", g_Haohmaru_WIN, 19, hdc);

	LoadImageToAni("Bmp/Haohmaru/BJUMPM/%d.bmp", g_Haohmaru_BJUMPM, 7, hdc);
	LoadImageToAni("Bmp/Haohmaru/IDLEM/%d.bmp", g_Haohmaru_IDLEM, 24, hdc);
	LoadImageToAni("Bmp/Haohmaru/INTROM/%d.bmp", g_Haohmaru_INTROM, 23, hdc);
	LoadImageToAni("Bmp/Haohmaru/JUMPM/%d.bmp", g_Haohmaru_JUMPM, 9, hdc);
	LoadImageToAni("Bmp/Haohmaru/KICKM/%d.bmp", g_Haohmaru_KICKM, 5, hdc);
	LoadImageToAni("Bmp/Haohmaru/LOSEM/%d.bmp", g_Haohmaru_LOSEM, 11, hdc);
	LoadImageToAni("Bmp/Haohmaru/WINM/%d.bmp", g_Haohmaru_WINM, 19, hdc);

	LoadImageToAni("Bmp/Iori/BJUMP/%d.bmp", g_Iori_BJUMP, 6, hdc);
	LoadImageToAni("Bmp/Iori/IDLE/%d.bmp", g_Iori_IDLE, 8, hdc);
	LoadImageToAni("Bmp/Iori/INTRO/%d.bmp", g_Iori_INTRO, 17, hdc);
	LoadImageToAni("Bmp/Iori/JUMP/%d.bmp", g_Iori_JUMP, 11, hdc);
	LoadImageToAni("Bmp/Iori/KICK/%d.bmp", g_Iori_KICK, 3, hdc);
	LoadImageToAni("Bmp/Iori/LOSE/%d.bmp", g_Iori_LOSE, 10, hdc);
	LoadImageToAni("Bmp/Iori/WIN/%d.bmp", g_Iori_WIN, 12, hdc);

	LoadImageToAni("Bmp/Iori/BJUMPM/%d.bmp", g_Iori_BJUMPM, 6, hdc);
	LoadImageToAni("Bmp/Iori/IDLEM/%d.bmp", g_Iori_IDLEM, 8, hdc);
	LoadImageToAni("Bmp/Iori/INTROM/%d.bmp", g_Iori_INTROM, 17, hdc);
	LoadImageToAni("Bmp/Iori/JUMPM/%d.bmp", g_Iori_JUMPM, 11, hdc);
	LoadImageToAni("Bmp/Iori/KICKM/%d.bmp", g_Iori_KICKM, 3, hdc);
	LoadImageToAni("Bmp/Iori/LOSEM/%d.bmp", g_Iori_LOSEM, 10, hdc);
	LoadImageToAni("Bmp/Iori/WINM/%d.bmp", g_Iori_WINM, 12, hdc);

	LoadImageToAni("Bmp/Kim/BJUMP/%d.bmp", g_Kim_BJUMP, 5, hdc);
	LoadImageToAni("Bmp/Kim/IDLE/%d.bmp", g_Kim_IDLE, 6, hdc);
	LoadImageToAni("Bmp/Kim/INTRO/%d.bmp", g_Kim_INTRO, 36, hdc);
	LoadImageToAni("Bmp/Kim/JUMP/%d.bmp", g_Kim_JUMP, 7, hdc);
	LoadImageToAni("Bmp/Kim/KICK/%d.bmp", g_Kim_KICK, 3, hdc);
	LoadImageToAni("Bmp/Kim/LOSE/%d.bmp", g_Kim_LOSE, 9, hdc);
	LoadImageToAni("Bmp/Kim/WIN/%d.bmp", g_Kim_WIN, 2, hdc);

	LoadImageToAni("Bmp/Kim/BJUMPM/%d.bmp", g_Kim_BJUMPM, 5, hdc);
	LoadImageToAni("Bmp/Kim/IDLEM/%d.bmp", g_Kim_IDLEM, 6, hdc);
	LoadImageToAni("Bmp/Kim/INTROM/%d.bmp", g_Kim_INTROM, 36, hdc);
	LoadImageToAni("Bmp/Kim/JUMPM/%d.bmp", g_Kim_JUMPM, 7, hdc);
	LoadImageToAni("Bmp/Kim/KICKM/%d.bmp", g_Kim_KICKM, 3, hdc);
	LoadImageToAni("Bmp/Kim/LOSEM/%d.bmp", g_Kim_LOSEM, 9, hdc);
	LoadImageToAni("Bmp/Kim/WINM/%d.bmp", g_Kim_WINM, 2, hdc);

	LoadImageToAni("Bmp/Nanaya/BJUMP/%d.bmp", g_Nanaya_BJUMP, 19, hdc);
	LoadImageToAni("Bmp/Nanaya/IDLE/%d.bmp", g_Nanaya_IDLE, 17, hdc);
	LoadImageToAni("Bmp/Nanaya/INTRO/%d.bmp", g_Nanaya_INTRO, 7, hdc);
	LoadImageToAni("Bmp/Nanaya/JUMP/%d.bmp", g_Nanaya_JUMP, 14, hdc);
	LoadImageToAni("Bmp/Nanaya/KICK/%d.bmp", g_Nanaya_KICK, 6, hdc);
	LoadImageToAni("Bmp/Nanaya/LOSE/%d.bmp", g_Nanaya_LOSE, 12, hdc);
	LoadImageToAni("Bmp/Nanaya/WIN/%d.bmp", g_Nanaya_WIN, 28, hdc);

	LoadImageToAni("Bmp/Nanaya/BJUMPM/%d.bmp", g_Nanaya_BJUMPM, 19, hdc);
	LoadImageToAni("Bmp/Nanaya/IDLEM/%d.bmp", g_Nanaya_IDLEM, 17, hdc);
	LoadImageToAni("Bmp/Nanaya/INTROM/%d.bmp", g_Nanaya_INTROM, 7, hdc);
	LoadImageToAni("Bmp/Nanaya/JUMPM/%d.bmp", g_Nanaya_JUMPM, 14, hdc);
	LoadImageToAni("Bmp/Nanaya/KICKM/%d.bmp", g_Nanaya_KICKM, 6, hdc);
	LoadImageToAni("Bmp/Nanaya/LOSEM/%d.bmp", g_Nanaya_LOSEM, 12, hdc);
	LoadImageToAni("Bmp/Nanaya/WINM/%d.bmp", g_Nanaya_WINM, 28, hdc);

	LoadImageToAni("Bmp/Ryu/BJUMP/%d.bmp", g_Ryu_BJUMP, 7, hdc);
	LoadImageToAni("Bmp/Ryu/IDLE/%d.bmp", g_Ryu_IDLE, 6, hdc);
	LoadImageToAni("Bmp/Ryu/INTRO/%d.bmp", g_Ryu_INTRO, 9, hdc);
	LoadImageToAni("Bmp/Ryu/JUMP/%d.bmp", g_Ryu_JUMP, 8, hdc);
	LoadImageToAni("Bmp/Ryu/KICK/%d.bmp", g_Ryu_KICK, 2, hdc);
	LoadImageToAni("Bmp/Ryu/LOSE/%d.bmp", g_Ryu_LOSE, 10, hdc);
	LoadImageToAni("Bmp/Ryu/WIN/%d.bmp", g_Ryu_WIN, 16, hdc);

	LoadImageToAni("Bmp/Ryu/BJUMPM/%d.bmp", g_Ryu_BJUMPM, 7, hdc);
	LoadImageToAni("Bmp/Ryu/IDLEM/%d.bmp", g_Ryu_IDLEM, 6, hdc);
	LoadImageToAni("Bmp/Ryu/INTROM/%d.bmp", g_Ryu_INTROM, 9, hdc);
	LoadImageToAni("Bmp/Ryu/JUMPM/%d.bmp", g_Ryu_JUMPM, 8, hdc);
	LoadImageToAni("Bmp/Ryu/KICKM/%d.bmp", g_Ryu_KICKM, 2, hdc);
	LoadImageToAni("Bmp/Ryu/LOSEM/%d.bmp", g_Ryu_LOSEM, 10, hdc);
	LoadImageToAni("Bmp/Ryu/WINM/%d.bmp", g_Ryu_WINM, 16, hdc);

	LoadImageToAni("Map/%d.bmp", g_BackGround, 39, hdc);
};



Player p1(1);
Player p2(2);

PlayerCollider p1Col;
PlayerCollider p2Col;

WallCollider LFWALL;
WallCollider RTWALL;
WallCollider UPWALL;
WallCollider DNWALL;


int g_SceneNumber = 1;
int g_GameStatus = 1;
static bool g_p1Selected = false;
static bool g_p2Selected = false;
bool g_IsP1Left = true; // 1p가 좌측이면 true
extern bool g_p1end;
extern bool g_p2end;
bool goswitch = false;
bool bgm = true;


LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

/// 비트맵 핸들
/// 용도 : 메모리 비트맵
HBITMAP g_hbmpMem;
CTexture* g_Texture = nullptr;

HWND g_hWnd;

/// WinMain 함수 : 윈도즈 프로그램의 최초 진입점 ( Entry Point)
int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR lpCmdLine,
	int nCmdShow)
{
	char	 szAppName[] = "EZ GAME";
	MSG	  	 msg;
	WNDCLASS wndclass;
	HDC hdc;

	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(hInstance, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	/// 윈도 클래스 등록
	RegisterClass(&wndclass);

	/// 윈도 생성
	g_hWnd = CreateWindow(szAppName,
		szAppName,
		WS_OVERLAPPEDWINDOW,
		100, 100, 1024, 768,
		NULL, NULL, hInstance, NULL);

	if (!g_hWnd) return FALSE;

	SoundSystem();

	// -----------------  애니 프레임 정리

	// 아쿠마 애니메이션 데이터
	{
		g_Akuma_BJUMP.Total_Frame = 60;

		g_Akuma_BJUMPM.Total_Frame = 60;

		g_Akuma_IDLE.Total_Frame = 60;

		g_Akuma_IDLEM.Total_Frame = 60;

		g_Akuma_JUMP.Total_Frame = 180;

		g_Akuma_JUMPM.Total_Frame = 180;

		g_Akuma_KICK.Total_Frame = 20;

		g_Akuma_KICKM.Total_Frame = 20;

		g_Akuma_INTRO.Total_Frame = 180;
		g_Akuma_LOSE.Total_Frame = 60;
		g_Akuma_WIN.Total_Frame = 180;

		g_Akuma_INTROM.Total_Frame = 180;
		g_Akuma_LOSEM.Total_Frame = 60;
		g_Akuma_WINM.Total_Frame = 180;
	}

	// 하오마루 애니메이션 데이터
	{
		g_Haohmaru_BJUMP.Total_Frame = 60;

		g_Haohmaru_BJUMPM.Total_Frame = 60;

		g_Haohmaru_IDLE.Total_Frame = 60;

		g_Haohmaru_IDLEM.Total_Frame = 60;

		g_Haohmaru_JUMP.Total_Frame = 120;

		g_Haohmaru_JUMPM.Total_Frame = 120;

		g_Haohmaru_KICK.Total_Frame = 20;

		g_Haohmaru_KICKM.Total_Frame = 20;

		g_Haohmaru_INTRO.Total_Frame = 180;
		g_Haohmaru_LOSE.Total_Frame = 60;
		g_Haohmaru_WIN.Total_Frame = 180;

		g_Haohmaru_INTROM.Total_Frame = 180;
		g_Haohmaru_LOSEM.Total_Frame = 60;
		g_Haohmaru_WINM.Total_Frame = 180;
	}

	// 이오리 애니메이션 데이터
	{
		g_Iori_BJUMP.Total_Frame = 60;

		g_Iori_BJUMPM.Total_Frame = 60;

		g_Iori_IDLE.Total_Frame = 60;

		g_Iori_IDLEM.Total_Frame = 60;

		g_Iori_JUMP.Total_Frame = 180;

		g_Iori_JUMPM.Total_Frame = 180;

		g_Iori_KICK.Total_Frame = 20;

		g_Iori_KICKM.Total_Frame = 20;

		g_Iori_INTRO.Total_Frame = 180;
		g_Iori_LOSE.Total_Frame = 60;
		g_Iori_WIN.Total_Frame = 180;

		g_Iori_INTROM.Total_Frame = 180;
		g_Iori_LOSEM.Total_Frame = 60;
		g_Iori_WINM.Total_Frame = 180;
	}

	// 김갑환 애니메이션 데이터
	{
		g_Kim_BJUMP.Total_Frame = 60;
		g_Kim_IDLE.Total_Frame = 60;
		g_Kim_INTRO.Total_Frame = 180;
		g_Kim_JUMP.Total_Frame = 180;
		g_Kim_KICK.Total_Frame = 30;
		g_Kim_LOSE.Total_Frame = 60;
		g_Kim_WIN.Total_Frame = 120;

		g_Kim_BJUMPM.Total_Frame = 60;
		g_Kim_IDLEM.Total_Frame = 60;
		g_Kim_INTROM.Total_Frame = 180;
		g_Kim_JUMPM.Total_Frame = 190;
		g_Kim_KICKM.Total_Frame = 30;
		g_Kim_LOSEM.Total_Frame = 60;
		g_Kim_WINM.Total_Frame = 120;
	}

	// 나나야 애니메이션 데이터
	{
		g_Nanaya_BJUMP.Total_Frame = 60;
		g_Nanaya_IDLE.Total_Frame = 60;
		g_Nanaya_INTRO.Total_Frame = 60;
		g_Nanaya_JUMP.Total_Frame = 180;
		g_Nanaya_KICK.Total_Frame = 20;
		g_Nanaya_LOSE.Total_Frame = 60;
		g_Nanaya_WIN.Total_Frame = 150;

		g_Nanaya_BJUMPM.Total_Frame = 60;
		g_Nanaya_IDLEM.Total_Frame = 60;
		g_Nanaya_INTROM.Total_Frame = 60;
		g_Nanaya_JUMPM.Total_Frame = 180;
		g_Nanaya_KICKM.Total_Frame = 20;
		g_Nanaya_LOSEM.Total_Frame = 60;
		g_Nanaya_WINM.Total_Frame = 150;
	}

	// 류 애니메이션 데이터
	{
		g_Ryu_BJUMP.Total_Frame = 60;
		g_Ryu_IDLE.Total_Frame = 60;
		g_Ryu_INTRO.Total_Frame = 180;
		g_Ryu_JUMP.Total_Frame = 180;
		g_Ryu_KICK.Total_Frame = 20;
		g_Ryu_LOSE.Total_Frame = 60;
		g_Ryu_WIN.Total_Frame = 180;

		g_Ryu_BJUMPM.Total_Frame = 60;
		g_Ryu_IDLEM.Total_Frame = 60;
		g_Ryu_INTROM.Total_Frame = 180;
		g_Ryu_JUMPM.Total_Frame = 180;
		g_Ryu_KICKM.Total_Frame = 20;
		g_Ryu_LOSEM.Total_Frame = 60;
		g_Ryu_WINM.Total_Frame = 180;
	}

	g_BackGround.Total_Frame = 180;
	// --------------------

	bool mapSelect = false;
	int _p1Character = 0;
	int _p2Character = 0;
	bool _p1Win = false;
	bool _p2Win = false;
	bool _p3Win = false;
	int _p1finishX, _p1finishY, _p2finishX, _p2finishY = 0;

	hdc = GetDC(g_hWnd);
	AnimationInit(hdc);

	/// 생성된 윈도를 화면에 표시
	ShowWindow(g_hWnd, nCmdShow);
	UpdateWindow(g_hWnd);
	BGM();

	// 60프레임 고정
	const float period = 0.01666666f;
	float checkTime = 0.0f;

	/// 메시지 루프
	while (TRUE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT) break;
			DispatchMessage(&msg);
		}
		else
		{
			TIME->Update();
			checkTime += TIME->Delta();

			if (period <= checkTime)
			{
				if (g_GameStatus != 3)
					WhosLeft();

				CheckStatus(&p1);
				CheckStatus(&p2);

				// 플레이어 충돌 체크
				if (p1.status == 5 || p1.status == 9 || p1.status == 10)
				{
					if (p1Col.IsCollideWithPlayer(&p2Col) == true)
					{
						_p1Win = true;
						g_GameStatus++;
					}
				}

				if (p2.status == 5 || p2.status == 9 || p2.status == 10)
				{
					if (p2Col.IsCollideWithPlayer(&p1Col) == true)
					{
						_p2Win = true;
						g_GameStatus++;
					}
				}

				if (_p1Win == true && _p2Win == true)
				{
					if (p1.playerpoint.y - p1.current->BmpY < p2.playerpoint.y - p2.current->BmpY)
					{
						_p2Win = false;
						_p1Win = false;
						p2.status = 6;
						p1.status = 7;
						p1.playerpoint.y = 700;
						g_GameStatus--;

						switch (p1.characterID)
						{
							case 1:
								SoundPlay(4);
								break;

							case 2:
								SoundPlay(9);
								break;

							case 3:
								SoundPlay(14);
								break;

							case 4:
								SoundPlay(19);
								break;

							case 5:
								SoundPlay(24);
								break;

							case 6:
								SoundPlay(29);
								break;
						}

						switch (p2.characterID)
						{
							case 1:
								SoundPlay(5);
								break;

							case 2:
								SoundPlay(10);
								break;

							case 3:
								SoundPlay(15);
								break;

							case 4:
								SoundPlay(20);
								break;

							case 5:
								SoundPlay(25);
								break;

							case 6:
								SoundPlay(30);
								break;
						}
					}

					else if (p1.playerpoint.y > p2.playerpoint.y)
					{
						_p1Win = false;
						_p2Win = false;
						p1.status = 6;
						p2.status = 7;
						g_GameStatus--;
						p2.playerpoint.y = 700;

						switch (p2.characterID)
						{
							case 1:
								SoundPlay(4);
								break;

							case 2:
								SoundPlay(9);
								break;

							case 3:
								SoundPlay(14);
								break;

							case 4:
								SoundPlay(19);
								break;

							case 5:
								SoundPlay(24);
								break;

							case 6:
								SoundPlay(29);
								break;
						}

						switch (p1.characterID)
						{
							case 1:
								SoundPlay(5);
								break;

							case 2:
								SoundPlay(10);
								break;

							case 3:
								SoundPlay(15);
								break;

							case 4:
								SoundPlay(20);
								break;

							case 5:
								SoundPlay(25);
								break;

							case 6:
								SoundPlay(30);
								break;
						}
					}

					else if (p1.playerpoint.y == p2.playerpoint.y)
					{
						_p3Win = true;
						_p1Win = false;
						_p2Win = false;
						p1.status = 6;
						g_GameStatus--;
						p2.status = 6;

						switch (p1.characterID)
						{
							case 1:
								SoundPlay(5);
								break;

							case 2:
								SoundPlay(10);
								break;

							case 3:
								SoundPlay(15);
								break;

							case 4:
								SoundPlay(20);
								break;

							case 5:
								SoundPlay(25);
								break;

							case 6:
								SoundPlay(30);
								break;
						}

						switch (p2.characterID)
						{
							case 1:
								SoundPlay(5);
								break;

							case 2:
								SoundPlay(10);
								break;

							case 3:
								SoundPlay(15);
								break;

							case 4:
								SoundPlay(20);
								break;

							case 5:
								SoundPlay(25);
								break;

							case 6:
								SoundPlay(30);
								break;
						}
					}
				}

				else if (_p1Win == true && _p2Win == false)
				{
					_p1Win = false;
					p1.status = 7;
					p2.status = 6;
					p1.playerpoint.y = 700;

					switch (p1.characterID)
					{
						case 1:
							SoundPlay(4);
							break;

						case 2:
							SoundPlay(9);
							break;

						case 3:
							SoundPlay(14);
							break;

						case 4:
							SoundPlay(19);
							break;

						case 5:
							SoundPlay(24);
							break;

						case 6:
							SoundPlay(29);
							break;
					}

					switch (p2.characterID)
					{
						case 1:
							SoundPlay(5);
							break;

						case 2:
							SoundPlay(10);
							break;

						case 3:
							SoundPlay(15);
							break;

						case 4:
							SoundPlay(20);
							break;

						case 5:
							SoundPlay(25);
							break;

						case 6:
							SoundPlay(30);
							break;
					}
				}

				else if (_p2Win == true && _p1Win == false)
				{
					_p2Win = false;
					p2.status = 7;
					p1.status = 6;
					p2.playerpoint.y = 700;

					switch (p2.characterID)
					{
						case 1:
							SoundPlay(4);
							break;

						case 2:
							SoundPlay(9);
							break;

						case 3:
							SoundPlay(14);
							break;

						case 4:
							SoundPlay(19);
							break;

						case 5:
							SoundPlay(24);
							break;

						case 6:
							SoundPlay(29);
							break;
					}

					switch (p1.characterID)
					{
						case 1:
							SoundPlay(5);
							break;

						case 2:
							SoundPlay(10);
							break;

						case 3:
							SoundPlay(15);
							break;

						case 4:
							SoundPlay(20);
							break;

						case 5:
							SoundPlay(25);
							break;

						case 6:
							SoundPlay(30);
							break;
					}
				}

				// 키입력
				if (g_SceneNumber == 1 || g_GameStatus == 2)
				{
					if ((GetAsyncKeyState(0x53) & 0x8001) == 0x8001) // S입력
					{
						switch (g_SceneNumber)
						{
							case 1:
							{
								if (g_p1Selected == false)
								{
									if (p1.selectCursor.x < 587)
										p1.selectCursor.x += 150;

									else if (p1.selectCursor.x >= 587)
									{
										if (p1.selectCursor.y <= 184)
										{
											p1.selectCursor.x = 287;
											p1.selectCursor.y = 384;
										}

										else if (p1.selectCursor.y >= 384)
										{
											p1.selectCursor.x = 287;
											p1.selectCursor.y = 184;
										}
									}
								}
							}
							break;

							case 2:
							{
								if (p1.status == 2)
								{
									switch (p1.characterID)
									{
										case 1:
											SoundPlay(2);
											break;

										case 2:
											SoundPlay(7);
											break;

										case 3:
											SoundPlay(12);
											break;

										case 4:
											SoundPlay(17);
											break;

										case 5:
											SoundPlay(22);
											break;

										case 6:
											SoundPlay(27);
											break;
									}
									p1.status = 4;
								}
							}
							break;

							default:
							{

							}
							break;
						}
					}

					if ((GetAsyncKeyState(0x41) & 0x8001) == 0x8001) //A입력
					{
						switch (g_SceneNumber)
						{
							case 1:
							{
								if (g_p1Selected == false)
								{
									if (p1.selectCursor.x == 287 && p1.selectCursor.y == 184 && p2.GetChID() != 1)
									{
										p1.setChID(1);
										g_p1Selected = true;
									}

									else if (p1.selectCursor.x == 437 && p1.selectCursor.y == 184 && p2.GetChID() != 2)
									{
										p1.setChID(2);
										g_p1Selected = true;
									}

									else if (p1.selectCursor.x == 587 && p1.selectCursor.y == 184 && p2.GetChID() != 3)
									{
										p1.setChID(3);
										g_p1Selected = true;
									}

									else if (p1.selectCursor.x == 287 && p1.selectCursor.y == 384 && p2.GetChID() != 4)
									{
										p1.setChID(4);
										g_p1Selected = true;
									}

									else if (p1.selectCursor.x == 437 && p1.selectCursor.y == 384 && p2.GetChID() != 5)
									{
										p1.setChID(5);
										g_p1Selected = true;
									}

									else if (p1.selectCursor.x == 587 && p1.selectCursor.y == 384 && p2.GetChID() != 6)
									{
										p1.setChID(6);
										g_p1Selected = true;
									}

									else
									{
										SoundPlay(33);
									}
								}
							}
							break;

							case 2:
							{
								if (p1.status == 4 || p1.status == 8)
								{
									switch (p1.characterID)
									{
										case 1:
											SoundPlay(3);
											break;

										case 2:
											SoundPlay(8);
											break;

										case 3:
											SoundPlay(13);
											break;

										case 4:
											SoundPlay(18);
											break;

										case 5:
											SoundPlay(23);
											break;

										case 6:
											SoundPlay(28);
											break;
									}
									p1.status = 5;
								}

								else if (p1.status == 2)
								{
									switch (p1.characterID)
									{
										case 1:
											SoundPlay(1);
											break;

										case 2:
											SoundPlay(6);
											break;

										case 3:
											SoundPlay(11);
											break;

										case 4:
											SoundPlay(16);
											break;

										case 5:
											SoundPlay(21);
											break;

										case 6:
											SoundPlay(26);
											break;
									}

									p1.status = 1;
								}

								else
								{

								}
							}
							break;

							default:
							{

							}
							break;
						}
					}

					if ((GetAsyncKeyState(0x4C) & 0x8001) == 0x8001) //L입력
					{
						switch (g_SceneNumber)
						{
							case 1:
							{
								if (g_p2Selected == false)
								{
									if (p2.selectCursor.x < 587)
										p2.selectCursor.x += 150;

									else if (p2.selectCursor.x >= 587)
									{
										if (p2.selectCursor.y <= 184)
										{
											p2.selectCursor.x = 287;
											p2.selectCursor.y = 384;
										}

										else if (p2.selectCursor.y >= 384)
										{
											p2.selectCursor.x = 287;
											p2.selectCursor.y = 184;
										}
									}
								}
							}
							break;

							case 2:
							{
								if (p2.status == 2)
								{
									switch (p2.characterID)
									{
										case 1:
											SoundPlay(2);
											break;

										case 2:
											SoundPlay(7);
											break;

										case 3:
											SoundPlay(12);
											break;

										case 4:
											SoundPlay(17);
											break;

										case 5:
											SoundPlay(22);
											break;

										case 6:
											SoundPlay(27);
											break;
									}
									p2.status = 4;
								}
							}
							break;

							default:
							{

							}
							break;

						}
					}

					if ((GetAsyncKeyState(0x4B) & 0x8001) == 0x8001) //K입력
					{
						switch (g_SceneNumber)
						{
							case 1:
							{
								if (g_p2Selected == false)
								{
									if (p2.selectCursor.x == 287 && p2.selectCursor.y == 184 && p1.GetChID() != 1)
									{
										p2.setChID(1);
										g_p2Selected = true;
									}

									else if (p2.selectCursor.x == 437 && p2.selectCursor.y == 184 && p1.GetChID() != 2)
									{
										p2.setChID(2);
										g_p2Selected = true;
									}

									else if (p2.selectCursor.x == 587 && p2.selectCursor.y == 184 && p1.GetChID() != 3)
									{
										p2.setChID(3);
										g_p2Selected = true;
									}

									else if (p2.selectCursor.x == 287 && p2.selectCursor.y == 384 && p1.GetChID() != 4)
									{
										p2.setChID(4);
										g_p2Selected = true;
									}

									else if (p2.selectCursor.x == 437 && p2.selectCursor.y == 384 && p1.GetChID() != 5)
									{
										p2.setChID(5);
										g_p2Selected = true;
									}

									else if (p2.selectCursor.x == 587 && p2.selectCursor.y == 384 && p1.GetChID() != 6)
									{
										p2.setChID(6);
										g_p2Selected = true;
									}

									else
									{
										SoundPlay(33);
									}
								}
							}
							break;

							case 2:
							{
								if (p2.status == 4 || p2.status == 8)
								{
									switch (p2.characterID)
									{
										case 1:
											SoundPlay(3);
											break;

										case 2:
											SoundPlay(8);
											break;

										case 3:
											SoundPlay(13);
											break;

										case 4:
											SoundPlay(18);
											break;

										case 5:
											SoundPlay(23);
											break;

										case 6:
											SoundPlay(28);
											break;
									}

									p2.status = 5;
								}

								else if (p2.status == 2)
								{
									switch (p2.characterID)
									{
										case 1:
											SoundPlay(1);
											break;

										case 2:
											SoundPlay(6);
											break;

										case 3:
											SoundPlay(11);
											break;

										case 4:
											SoundPlay(16);
											break;

										case 5:
											SoundPlay(21);
											break;

										case 6:
											SoundPlay(26);
											break;
									}
									p2.status = 1;
								}

								else
								{

								}
							}
							break;

							default:
							{

							}
							break;
						}
					}
				}

				if (g_p1end == true && g_p2end == true)
				{
					if (GetAsyncKeyState(VK_RETURN))
					{
						g_GameStatus = 1;
						g_SceneNumber = 1;
						g_p1end = false;
						g_p2end = false;
						p2.current->Current_Frame = 0;
						p1.current->Current_Frame = 0;
						p1.characterID = 0;
						p2.characterID = 0;
						BGMPlay();
						// ------------------------
					}
				}

				if (g_p1Selected == true && g_p2Selected == true)
				{
					g_p1Selected = false;
					g_p2Selected = false;

					switch (p1.GetChID())
					{
						case 1:
						{
							p1.GetAniToPlayer(&g_Akuma_BJUMP, &g_Akuma_IDLE, &g_Akuma_INTRO, &g_Akuma_JUMP, &g_Akuma_KICK, &g_Akuma_LOSE, &g_Akuma_WIN
								, &g_Akuma_BJUMPM, &g_Akuma_IDLEM, &g_Akuma_INTROM, &g_Akuma_JUMPM, &g_Akuma_KICKM, &g_Akuma_LOSEM, &g_Akuma_WINM);
						}
						break;

						case 2:
						{
							p1.GetAniToPlayer(&g_Haohmaru_BJUMP, &g_Haohmaru_IDLE, &g_Haohmaru_INTRO, &g_Haohmaru_JUMP, &g_Haohmaru_KICK, &g_Haohmaru_LOSE, &g_Haohmaru_WIN,
								&g_Haohmaru_BJUMPM, &g_Haohmaru_IDLEM, &g_Haohmaru_INTROM, &g_Haohmaru_JUMPM, &g_Haohmaru_KICKM, &g_Haohmaru_LOSEM, &g_Haohmaru_WINM);

						}
						break;

						case 3:
						{
							p1.GetAniToPlayer(&g_Iori_BJUMP, &g_Iori_IDLE, &g_Iori_INTRO, &g_Iori_JUMP, &g_Iori_KICK, &g_Iori_LOSE, &g_Iori_WIN,
								&g_Iori_BJUMPM, &g_Iori_IDLEM, &g_Iori_INTROM, &g_Iori_JUMPM, &g_Iori_KICKM, &g_Iori_LOSEM, &g_Iori_WINM);
						}
						break;

						case 4:
						{
							p1.GetAniToPlayer(&g_Kim_BJUMP, &g_Kim_IDLE, &g_Kim_INTRO, &g_Kim_JUMP, &g_Kim_KICK, &g_Kim_LOSE, &g_Kim_WIN,
								&g_Kim_BJUMPM, &g_Kim_IDLEM, &g_Kim_INTROM, &g_Kim_JUMPM, &g_Kim_KICKM, &g_Kim_LOSEM, &g_Kim_WINM);
						}
						break;

						case 5:
						{
							p1.GetAniToPlayer(&g_Nanaya_BJUMP, &g_Nanaya_IDLE, &g_Nanaya_INTRO, &g_Nanaya_JUMP, &g_Nanaya_KICK, &g_Nanaya_LOSE, &g_Nanaya_WIN,
								&g_Nanaya_BJUMPM, &g_Nanaya_IDLEM, &g_Nanaya_INTROM, &g_Nanaya_JUMPM, &g_Nanaya_KICKM, &g_Nanaya_LOSEM, &g_Nanaya_WINM);
						}
						break;

						case 6:
						{
							p1.GetAniToPlayer(&g_Ryu_BJUMP, &g_Ryu_IDLE, &g_Ryu_INTRO, &g_Ryu_JUMP, &g_Ryu_KICK, &g_Ryu_LOSE, &g_Ryu_WIN,
								&g_Ryu_BJUMPM, &g_Ryu_IDLEM, &g_Ryu_INTROM, &g_Ryu_JUMPM, &g_Ryu_KICKM, &g_Ryu_LOSEM, &g_Ryu_WINM);
						}
						break;
					}
					switch (p2.GetChID())
					{
						case 1:
						{
							p2.GetAniToPlayer(&g_Akuma_BJUMP, &g_Akuma_IDLE, &g_Akuma_INTRO, &g_Akuma_JUMP, &g_Akuma_KICK, &g_Akuma_LOSE, &g_Akuma_WIN
								, &g_Akuma_BJUMPM, &g_Akuma_IDLEM, &g_Akuma_INTROM, &g_Akuma_JUMPM, &g_Akuma_KICKM, &g_Akuma_LOSEM, &g_Akuma_WINM);
						}
						break;

						case 2:
						{
							p2.GetAniToPlayer(&g_Haohmaru_BJUMP, &g_Haohmaru_IDLE, &g_Haohmaru_INTRO, &g_Haohmaru_JUMP, &g_Haohmaru_KICK, &g_Haohmaru_LOSE, &g_Haohmaru_WIN,
								&g_Haohmaru_BJUMPM, &g_Haohmaru_IDLEM, &g_Haohmaru_INTROM, &g_Haohmaru_JUMPM, &g_Haohmaru_KICKM, &g_Haohmaru_LOSEM, &g_Haohmaru_WINM);

						}
						break;

						case 3:
						{
							p2.GetAniToPlayer(&g_Iori_BJUMP, &g_Iori_IDLE, &g_Iori_INTRO, &g_Iori_JUMP, &g_Iori_KICK, &g_Iori_LOSE, &g_Iori_WIN,
								&g_Iori_BJUMPM, &g_Iori_IDLEM, &g_Iori_INTROM, &g_Iori_JUMPM, &g_Iori_KICKM, &g_Iori_LOSEM, &g_Iori_WINM);
						}
						break;

						case 4:
						{
							p2.GetAniToPlayer(&g_Kim_BJUMP, &g_Kim_IDLE, &g_Kim_INTRO, &g_Kim_JUMP, &g_Kim_KICK, &g_Kim_LOSE, &g_Kim_WIN,
								&g_Kim_BJUMPM, &g_Kim_IDLEM, &g_Kim_INTROM, &g_Kim_JUMPM, &g_Kim_KICKM, &g_Kim_LOSEM, &g_Kim_WINM);
						}
						break;

						case 5:
						{
							p2.GetAniToPlayer(&g_Nanaya_BJUMP, &g_Nanaya_IDLE, &g_Nanaya_INTRO, &g_Nanaya_JUMP, &g_Nanaya_KICK, &g_Nanaya_LOSE, &g_Nanaya_WIN,
								&g_Nanaya_BJUMPM, &g_Nanaya_IDLEM, &g_Nanaya_INTROM, &g_Nanaya_JUMPM, &g_Nanaya_KICKM, &g_Nanaya_LOSEM, &g_Nanaya_WINM);
						}
						break;

						case 6:
						{
							p2.GetAniToPlayer(&g_Ryu_BJUMP, &g_Ryu_IDLE, &g_Ryu_INTRO, &g_Ryu_JUMP, &g_Ryu_KICK, &g_Ryu_LOSE, &g_Ryu_WIN,
								&g_Ryu_BJUMPM, &g_Ryu_IDLEM, &g_Ryu_INTROM, &g_Ryu_JUMPM, &g_Ryu_KICKM, &g_Ryu_LOSEM, &g_Ryu_WINM);
						}
						break;
					}
					BGMPasue();
					g_SceneNumber++;
				}

				checkTime = 0.0f;
				InvalidateRect(g_hWnd, NULL, false);
			}
		}
	}

	return (int)msg.wParam;
}


LRESULT CALLBACK WndProc(HWND hWnd, UINT message,
	WPARAM wParam, LPARAM lParam)
{
	HDC		    hdc, MemDC;
	PAINTSTRUCT ps; // tagPAINTSTRUCT 
	static HDC BackBuffer;
	static HBITMAP hOldBmp, hBmp;
	RECT bufferRT;



	switch (message)
	{
		//case WM_LBUTTONDOWN:
		//	InvalidateRect(hWnd, NULL, false);
		//	break;

		case WM_KEYDOWN:
		{

		}

		case WM_CREATE:
		{
			hdc = GetDC(hWnd);
			BackBuffer = CreateCompatibleDC(hdc);
			TIME->Create();
		}
		break;

		case WM_PAINT:
		{
			MemDC = BeginPaint(hWnd, &ps);
			{
				GetClientRect(hWnd, &bufferRT);
				hdc = CreateCompatibleDC(MemDC);
				hBmp = CreateCompatibleBitmap(MemDC, bufferRT.right, bufferRT.bottom);
				hOldBmp = (HBITMAP)SelectObject(hdc, hBmp);
				PatBlt(hdc, 0, 0, bufferRT.right, bufferRT.bottom, WHITENESS);

				switch (g_SceneNumber)
				{
					case 1:
					{
						// 픽창
						
						DrawSelect(hdc);
						break;
					}

					case 2:
					{
						switch (g_GameStatus)
						{
							case 1:
							{
								PreRound();
								LoadMap(hdc);
								PlayIntro(hdc);
							}
							break;

							case 2:
							{
								if (goswitch == false)
								{
									SoundPlay(32);
									goswitch = true;
								}

								LoadMap(hdc);
								if (p1.status == 5 || p1.status == 9 || p1.status == 10)
									KickAni1P(hdc);
								else
									AniPlay1P(hdc);


								if (p2.status == 5 || p2.status == 9 || p2.status == 10)
									KickAni2P(hdc);
								else
									AniPlay2P(hdc);

							}
							break;

							case 3:
							{
								LoadMap(hdc);
								PlayEnding(hdc);
							}
							break;
						}
						// 인게임 돌아갈 곳
					}
				}

				BitBlt(MemDC, 0, 0, bufferRT.right, bufferRT.bottom, hdc, 0, 0, SRCCOPY);
				SelectObject(hdc, hOldBmp);
				DeleteObject(hBmp);
				DeleteDC(hdc);

				EndPaint(hWnd, &ps);
				break;
			}
		}


		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:

			return DefWindowProc(hWnd,
				message, wParam, lParam);
			break;
	}

	return 0;
}

// 로직을 처리하고
// 물리 현상을 처리하고
// 그림을 그려