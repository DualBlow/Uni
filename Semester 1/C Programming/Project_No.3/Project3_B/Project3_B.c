#include <stdio.h>
int main ()
{
	system ("chcp 1253");
	int LINE,i,j,c,D;
	do
	{
	printf("�������� ��� ������ ��� ������� (>= 1)   >>>  ");
	scanf("%d",&LINE);
	printf("\n[ � ������� ��� ������� ����� ��: %d ]\n\n",LINE);
	}while (LINE < 1);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	D=LINE;
	for (i=0; (i <LINE ) ; i++)
	{
		for (j=0 ; j<=i ; j++)
		{									/*����� �����*/
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	for (i=0; (i < LINE ) ; i++)
	{
		for (j=LINE-1; (j>i) ;j--)
		{
			printf(" ");
		} 									/*������� �����*/
		for(c=0; c<=j; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	for (i=0; (i < LINE ) ; i++)
	{
		for (j=LINE-1; (j>i) ;j--)
		{
			printf(" ");
		} 									/*����� �����*/
		for(c=0; c<=j*2; c++)
		{
				printf("*");	
		}
		printf("\n");
	} 
	printf("\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	for (i=0; (i<LINE); i++)
	{
		for (j=0; j<LINE; j++)
		{
			if (i==0 || i==LINE-1 || j==LINE-1 || j==0)
			{
			printf("*");	
			}
			else
			{
				if (i==j)
				{
					printf(".");			/*������� �����*/
				}
				else
				{
					if (i+j==LINE-1)
					{
						printf(".");
					}
					else
					{
						printf(" ");
					}
				}
			}	
		}
		printf("\n");
	}
	
	
	
		
		
	return 0;
}
