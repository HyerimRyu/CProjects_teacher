#include <stdio.h>

void main()
{
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);

	ch = ( ch>='A' && ch<='Z'  ) ? ch + ('a'-'A') :
		 ( ch>='a' && ch<='z' ) ? ch - 32 : ch;

	printf("출력 결과 : %c\n\n", ch);
}