#include <stdio.h>

//�����(���α׷���) ���� �ڷ���
struct Student
{
	//�������
	int kor;
	int eng;
	struct Student* priv;	
	struct Student* next;
};

void main()
{		
	struct Student stu = { 10,20 };
	struct Student s = { 100, 200 };

	printf("  %d   \n", s.kor);
	printf("  %d   \n", s.eng);
}
