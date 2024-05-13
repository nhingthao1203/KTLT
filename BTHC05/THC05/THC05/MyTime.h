#pragma once
class MyTime
{
	private: 
		int hour, minute, second;
public:
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	int getHour();
	int getMinute();
	int getSecond();
	bool validTime(int h, int m, int s);
	void increaseSecond(int n);
	void decreaseSecond(int n);

};