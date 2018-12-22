//***************************************************************************************
// GameTimer.h by Frank Luna (C) 2011 All Rights Reserved.
//***************************************************************************************

#ifndef GAMETIMER_H
#define GAMETIMER_H

class GameTimer
{
public:
	GameTimer();

	 // in seconds
	float TotalTime()const;
	// in seconds
	float DeltaTime()const;
	 
	// Call before message loop.
	void Reset();
	// Call when unpaused.
	void Start(); 
	// Call when paused.
	void Stop();  
	// Call every frame.
	void Tick();  

private:
	double mSecondsPerCount;
	double mDeltaTime;

	__int64 mBaseTime;
	__int64 mPausedTime;
	__int64 mStopTime;
	__int64 mPrevTime;
	__int64 mCurrTime;

	bool mStopped;
};

#endif // GAMETIMER_H