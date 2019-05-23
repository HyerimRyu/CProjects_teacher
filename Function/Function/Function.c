#include <stdio.h>

void output(int x, int y, int z);
int cal(int x, int y);
int input();
void display();

//함수의 프로토타입
void main()
{
	//안내메세지 출력
	display();

	int a, b;

	//정수 입력
	a = input();
	b = input();	

	//입력받은 정수 2개 덧셈 연산
	int c;
	c= cal(a, b);  //c= a+b;

	//덧셈결과 출력
	output(a, b, c);
}

//덧셈결과 출력기능
void output(int x, int y, int z)
{	
	printf(" output : %d + %d = %d\n", x, y, z);
}

//덧셈연산 기능
int cal(int x, int y)
{
	int z = x + y;
	return z;
}


//정수입력 기능
int input()
{
	int k;
	printf("input : ");
	scanf("%d", &k);

	return k;
}

//안내메세지 출력
void display()
{
	printf("사용자로부터 두정수를 입력받아 덧셈하는 프로그램입니다.\n\n");
	
}





