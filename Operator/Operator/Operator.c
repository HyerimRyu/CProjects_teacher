#include <stdio.h>

void main()
{	
	printf("학점산출 프로그램입니다.\n\n");
	printf("점수를 입력하면 학점을 출력합니다.\n\n");

	int score;
	printf("점수입력 : ");
	scanf("%d", &score);

	//입력받은 score값을 계산하여 학점산출
	char grade; //학점을 저장하는 변수

	grade= (score>=90 && score<=100)? 'A'+3 :
		   (score>=80 && score<90)? 'B' :
		   (score>=70 && score<80)? 'C' :
		   (score>=60 && score<70)? 'D' : 'F';

	printf("당신의 학점은 [%c학점]입니다.\n", grade);



}