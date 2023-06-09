#pragma once

#define TIME Time::GetInstance()

class Time
{
private:
	__int64 ticksPerSecond;//초당 틱
	__int64 curTicks;//현재 틱
	__int64 lastTicks;//지난 체크 지점의 틱
	__int64 lastFPSUpdate;

	unsigned int frameCount;
	float runningTime;//Time 객체 생성이후 시간이 얼마나 흘렀나 저장
	float framePerSecond;//초당 프레임

	float secondsPerTick;//1틱당 몇 초
	float timeElapsed;//1프레임당 몇 초

	static Time* instance;
	Time();
	~Time();

public:
	static Time* GetInstance() 
	{
		if (instance == nullptr)
		{
			instance = new Time();
		}

		return instance; 
	}
	static void Create() { instance = new Time(); }
	static void Delete() { delete instance; }

	void Update();


	float Delta() { return timeElapsed; }
	float FPS() { return framePerSecond; }
	float Running() { return runningTime; }
};