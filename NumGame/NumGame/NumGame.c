#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	//랜덤값 초기화작업
	srand( time(NULL) );

	int com; //컴퓨터가 저장할 정답숫자	
	com = rand()%100; //랜덤값(0~99)

	int user; //사용자가 입력하는 값 저장변수

	while (1)
	{
		printf("정수입력(0~9) : ");
		scanf("%d", &user);

		//user값과 com값을 비교 
		if (user > com)
		{
			printf(" %d 보다 작습니다.\n\n", user);
		}
		else if (user < com)
		{
			printf(" %d 보다 큽니다.\n\n", user);
		}
		else
		{
			printf("축하합니다.!! 정답입니다~~\n\n");
			break;
		}

	}//while

	printf("프로그램을 종료합니다!!\n");	

}