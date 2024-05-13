#include "MyTime.h"

void MyTime::setHour(int h) {
	hour = h;
}

void MyTime::setMinute(int m) {
	minute = m;
}

void MyTime::setSecond(int s) {
	second = s;
}

int MyTime::getHour() {
	return hour;
}

int MyTime::getMinute() {
	return minute;
}

int MyTime::getSecond() {
	return second;
}

bool MyTime::validTime(int h, int m, int s) {
	return h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60;
}

void MyTime::increaseSecond(int n) {
	int totalSeconds = hour * 3600 + minute * 60 + second; // Tính tổng số giây
	totalSeconds += n; // Tăng n giây
	if (totalSeconds < 0) totalSeconds = 0; 
	hour = (totalSeconds / 3600)%24; 
	totalSeconds %= 3600;
	minute = totalSeconds / 60; 
	second = totalSeconds % 60; 
}

void MyTime::decreaseSecond(int n) {
	int h = n / 3600;
	int m = (n % 3600) / 60;
	int s = (n % 3600) % 60;
	second -= s;
	if (second < 0)
	{
		second += 60;
		minute--;

	}
	minute -= m;
	if (minute < 0) {
		minute += 60;
		hour--;
	}
	hour -= h;
	if (hour < 0)
	{
		hour += 24;

	}
}
