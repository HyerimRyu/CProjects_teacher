#include <stdio.h>

void bbb()
{
	printf("bbbb\n");
}

void aaa(int n)
{
	if (n <= 0)
	{
		return;
	}

	printf("Hello\n");	
	aaa(n-1);//������. Recursive call
	printf("aaa�Լ�����\n");
}

void main()
{
	aaa(4);	
}

