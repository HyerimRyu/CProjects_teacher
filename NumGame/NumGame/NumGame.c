#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	//������ �ʱ�ȭ�۾�
	srand( time(NULL) );

	int com; //��ǻ�Ͱ� ������ �������	
	com = rand()%100; //������(0~99)

	int user; //����ڰ� �Է��ϴ� �� ���庯��

	while (1)
	{
		printf("�����Է�(0~9) : ");
		scanf("%d", &user);

		//user���� com���� �� 
		if (user > com)
		{
			printf(" %d ���� �۽��ϴ�.\n\n", user);
		}
		else if (user < com)
		{
			printf(" %d ���� Ů�ϴ�.\n\n", user);
		}
		else
		{
			printf("�����մϴ�.!! �����Դϴ�~~\n\n");
			break;
		}

	}//while

	printf("���α׷��� �����մϴ�!!\n");	

}