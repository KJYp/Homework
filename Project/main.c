/* 평가항목 1번 과제설명

  컴퓨터프로그래밍 평가과제 (배점 25점)
  학과 : 컴퓨터공학과
  학번 : 202200872
  이름 : 김재영

  과제 주제 : 코로나걸린 지인 명단

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "sub.h"

struct corona /*평가항목 5번 구조체사용*/
{ 
	char name[20];
	char relation[20];
	char sex[20];
	int age;
	int date;
};

int main(void)
{
	struct corona list[5]; /*평가항목 3번 배열사용*/
	int* p; /*평가항목 4번 포인터사용*/

	int number; //적을 인원수 
	int complete; //격리해제 날짜
	
	int (*pf)(int); // 평가항목 6번 포인터 활용
	pf = date_cal;

	printf("명단을 적을 인원수를 입력해주세요(최대 5명): ");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("확진자의 성함을 입력해주세요:");
		scanf(" %s", list[i].name);


		printf("확진자와의 관계를 입력해주세요(가족,친구,친척,애인):");
		scanf(" %s", list[i].relation);


		printf("확진자의 성별을 입력해주세요(남성,여성):");
		scanf(" %s", list[i].sex);


		printf("확진자의 연령을 입력해주세요:");
		scanf(" %d", &list[i].age);


		printf("확진된 날짜를 입력해주세요(ex.2022년 1월 1일 = 20220101):");
		scanf(" %d", &list[i].date);


		p = &list[i].date;


		complete = pf(list[i].date);

		FILE* fp;  /*평가항목 7번 파일입출력*/

		fp = fopen("file.txt", "a");

		if ((fp = fopen("file.txt", "a")) == NULL)
			printf("파일 오픈 실패");


		fprintf(fp, "%s\t%s\t%s\t%d\t%d\t%d", list[i].name, list[i].relation, list[i].sex, list[i].age, *p, complete);

		fprintf(fp, "\n");


		fclose(fp);
	}
	

	
	return 0;
}


