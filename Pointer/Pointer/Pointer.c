#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* input();

void main()
{
	char* p;
	p = input();

	printf(" %s  \n", p);
	free(p);	
}

char* input()
{	
	char str[100];
	scanf("%s", str);

	//�Է¹��� ���ڼ��� ���,...
	int len=strlen(str);

	//�޸𸮿� 6����Ʈ �������!!
	char* p2= malloc(len+1);

	//str�� �ִ� ���ڿ��� p2�� ����Ű�� �޸𸮿� copy
	strcpy(p2, str);

	return p2;
}