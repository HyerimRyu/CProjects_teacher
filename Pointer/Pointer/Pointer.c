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

	//입력받은 글자수를 계산,...
	int len=strlen(str);

	//메모리에 6바이트 만들어줘!!
	char* p2= malloc(len+1);

	//str에 있는 문자열을 p2가 가리키는 메모리에 copy
	strcpy(p2, str);

	return p2;
}