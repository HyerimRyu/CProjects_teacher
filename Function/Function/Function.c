#include <stdio.h>

void output(int x, int y, int z);
int cal(int x, int y);
int input();
void display();

//�Լ��� ������Ÿ��
void main()
{
	//�ȳ��޼��� ���
	display();

	int a, b;

	//���� �Է�
	a = input();
	b = input();	

	//�Է¹��� ���� 2�� ���� ����
	int c;
	c= cal(a, b);  //c= a+b;

	//������� ���
	output(a, b, c);
}

//������� ��±��
void output(int x, int y, int z)
{	
	printf(" output : %d + %d = %d\n", x, y, z);
}

//�������� ���
int cal(int x, int y)
{
	int z = x + y;
	return z;
}


//�����Է� ���
int input()
{
	int k;
	printf("input : ");
	scanf("%d", &k);

	return k;
}

//�ȳ��޼��� ���
void display()
{
	printf("����ڷκ��� �������� �Է¹޾� �����ϴ� ���α׷��Դϴ�.\n\n");
	
}





