#include <stdio.h>

void main()
{	
	printf("�������� ���α׷��Դϴ�.\n\n");
	printf("������ �Է��ϸ� ������ ����մϴ�.\n\n");

	int score;
	printf("�����Է� : ");
	scanf("%d", &score);

	//�Է¹��� score���� ����Ͽ� ��������
	char grade; //������ �����ϴ� ����

	grade= (score>=90 && score<=100)? 'A'+3 :
		   (score>=80 && score<90)? 'B' :
		   (score>=70 && score<80)? 'C' :
		   (score>=60 && score<70)? 'D' : 'F';

	printf("����� ������ [%c����]�Դϴ�.\n", grade);



}