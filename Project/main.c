/* ���׸� 1�� ��������

  ��ǻ�����α׷��� �򰡰��� (���� 25��)
  �а� : ��ǻ�Ͱ��а�
  �й� : 202200872
  �̸� : ���翵

  ���� ���� : �ڷγ��ɸ� ���� ���

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "sub.h"

struct corona /*���׸� 5�� ����ü���*/
{ 
	char name[20];
	char relation[20];
	char sex[20];
	int age;
	int date;
};

int main(void)
{
	struct corona list[5]; /*���׸� 3�� �迭���*/
	int* p; /*���׸� 4�� �����ͻ��*/

	int number; //���� �ο��� 
	int complete; //�ݸ����� ��¥
	
	int (*pf)(int); // ���׸� 6�� ������ Ȱ��
	pf = date_cal;

	printf("����� ���� �ο����� �Է����ּ���(�ִ� 5��): ");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("Ȯ������ ������ �Է����ּ���:");
		scanf(" %s", list[i].name);


		printf("Ȯ���ڿ��� ���踦 �Է����ּ���(����,ģ��,ģô,����):");
		scanf(" %s", list[i].relation);


		printf("Ȯ������ ������ �Է����ּ���(����,����):");
		scanf(" %s", list[i].sex);


		printf("Ȯ������ ������ �Է����ּ���:");
		scanf(" %d", &list[i].age);


		printf("Ȯ���� ��¥�� �Է����ּ���(ex.2022�� 1�� 1�� = 20220101):");
		scanf(" %d", &list[i].date);


		p = &list[i].date;


		complete = pf(list[i].date);

		FILE* fp;  /*���׸� 7�� ���������*/

		fp = fopen("file.txt", "a");

		if ((fp = fopen("file.txt", "a")) == NULL)
			printf("���� ���� ����");


		fprintf(fp, "%s\t%s\t%s\t%d\t%d\t%d", list[i].name, list[i].relation, list[i].sex, list[i].age, *p, complete);

		fprintf(fp, "\n");


		fclose(fp);
	}
	

	
	return 0;
}


