
#define _CRT_SECURE_NO_WARNINGS
#include "sub.h"  // ���׸� 8�� ���߼ҽ� ���� ���

int date_cal(int date) //���׸� 2�� �Լ����
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

	day += 14; // 2�ְ� �����ٸ� �鿪�ڷ� ����

	if ( (day > 30) && ( month == 4 || month == 6 || month == 9 || month == 11 )) //30���� ���� ���
	{
		month = month + 1;
		day = day - 30;
	}

	if ( (day > 28) && ( month == 2 ) ) //28���� ���� ���
	{
		month = month + 1;
		day = day - 28;
	}
	
	if ( (day > 31) && ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ))//31���� ���� ���
	{
		month = month + 1;
		day = day - 31;
	}

	if (month >= 13) //12���� �Ѿ�� ���
	{
		year = year + 1;
		month = 1;
	}

	outcome = year * 10000 + month * 100 + day;

	return outcome;
}

