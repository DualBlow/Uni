#include <stdio.h>
int main ()
{
	system ("chcp 1253");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	int n,z,square_z,N_thet=0;
	double avg=0;
	int sum=0,sumAR=0;
	int prod=1;
	int j=1;
	printf("���� ��� ���� %i:\t",j);
	scanf("%d",&z);
	while (z !=0 )
	{
		printf("� ������� (%d) �����: \n",z);
		if (z > 0)
		{
			printf("������� ������� &\n");
			sum+=z;
			N_thet+=1;
		}
		else
		{
			printf("��������� ������� &\n");
			prod*=z;
		}
		if (z%2==0)
		{
			printf ("������ �������.\n\n");
			sumAR++;
		}
		else
		{
			printf("�������� �������.\n");
			square_z=z*z;
			printf("�� ��������� ��� ������������� �������� ������� %d �����: %d\n\n",z,square_z);
		}
		j++;
		n++;
		printf("���� ��� ���� %i:\t",j);
		scanf("%d",&z);
		
	}
	avg= sum/N_thet;
	printf ("�� �������� ��� ������ ������� ����� : %d \n",sumAR);
	printf("�� �������� ��� ��������� ����� �����: %d\n",prod);
	printf("� ����� ���� ��� ������� ����� ��� ������� ����� : %lf\n",avg);
	
	return 0;
}
