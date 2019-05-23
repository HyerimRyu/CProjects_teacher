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
	aaa(n-1);//가능함. Recursive call
	printf("aaa함수종료\n");
}

void main()
{
	aaa(4);	
}

