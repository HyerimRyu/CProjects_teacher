#include <stdio.h>

//사용자(프로그래머) 정의 자료형
struct Student
{
	//멤버변수
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
