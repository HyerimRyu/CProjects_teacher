#include <stdio.h>

void main()
{
	char ch;

	printf("���� �Է� : ");
	scanf("%c", &ch);

	ch = ( ch>='A' && ch<='Z'  ) ? ch + ('a'-'A') :
		 ( ch>='a' && ch<='z' ) ? ch - 32 : ch;

	printf("��� ��� : %c\n\n", ch);
}