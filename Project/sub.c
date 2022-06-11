
#define _CRT_SECURE_NO_WARNINGS
#include "sub.h"  // 평가항목 8번 다중소스 파일 사용

int date_cal(int date) //평가항목 2번 함수사용
{	
	int year;
	int month;
	int day;
	int cal;
	int outcome = 0;

	day = date % 100;

	
	cal = date % 10000;
	
	month = cal / 100;

	year = date / 10000;

	day += 14; // 2주가 지났다면 면역자로 가정

	if ( (day > 30) && ( month == 4 || month == 6 || month == 9 || month == 11 )) //30일인 달일 경우
	{
		month = month + 1;
		day = day - 30;
	}

	if ( (day > 28) && ( month == 2 ) ) //28일인 달일 경우
	{
		month = month + 1;
		day = day - 28;
	}
	
	if ( (day > 31) && ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ))//31일인 달일 경우
	{
		month = month + 1;
		day = day - 31;
	}

	if (month >= 13) //12월을 넘어가는 경우
	{
		year = year + 1;
		month = 1;
	}

	outcome = year * 10000 + month * 100 + day;

	return outcome;
}

