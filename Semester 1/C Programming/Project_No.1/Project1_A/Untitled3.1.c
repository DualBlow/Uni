#include <stdio.h>
#include <math.h>
int main()
{	
	system ("chcp 1253");
	double a,b,c,x0,x1,x2,D;
	printf("�������� ��� ���� � (����� ��� 0 � 1)\t\n>>> ");
	scanf("%lf",&a);
	while (a==0 || a==1)
	{
		printf("�������� �������� ��� ������ ���� (�) (����� ��� 1 � 0)\t\n>>> ");
		scanf("%lf",&a);
	}
	printf("�������� ��� ������� ���� (�)\t\n>>> ");
	scanf("%lf",&b);
	printf("�������� ��� ��������� ���� (�)\t\n>>> ");
	scanf("%lf",&c);
	printf("�=  %lf\n�=  %lf\n�=  %lf\n\n",a,b,c);
	D=pow(b,2)-4*a*c;
	printf("����������� =%4.lf^2-4*%4.lf*%4.lf = %lf\n",b,a,c,D);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
	if (D>=0)
		if (D==0)
		{
			printf("� ������������ ������� ���� ��� ����� ���� ��� � ����������� (%.2lf) ����� ��� �� �� 0\n");
			x0= -b/(2*a);
			printf("� ���� ���� ��� ����:  %lf\n",x0);
		}
		else
		{
			x1= -b+sqrt(D)/(2*a);
			x2= -b-sqrt(D)/(2*a);
			printf("� ������������ ������� ���� ��� ����� ���� ��� � ����������� (%lf) ����� ���������� ��� �� 0\n");
			printf("�� ��� ����� ����� ����:\tx1= %lf\tx2 %lf ",x1,x2);
		}
	
	else
		printf("� ������� ����� ������� ����� � ����������� (%lf) ����� ��������\n",D);
	
	
	return 0;
}
