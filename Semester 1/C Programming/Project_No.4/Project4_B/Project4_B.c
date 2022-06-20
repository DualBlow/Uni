#include <stdio.h>
#include <math.h>
int input1();
int input2();
void main_menu(int a, int b);
void select (int s, int a, int b);
int power (int x , int y);
int paragontiko (int x);
int validate_nums (int N, int K);
int num_combinations(int N, int K);
int plhthos_epilogwn(int j);

int main()
{
	int A,B;
	system ("chcp 1253");
	A=input1();
	B=input2();
	printf("\n\n�� ����� ��� ������� �����: \n\n\t�=%d\t&     �=%d\n",A,B);
	main_menu(A,B);
	return 0;
}

int input1 ()
{
	int A;
	printf("�������� �������� ��� ����� ������ [A]:  \n");
	scanf("%d",&A);
	return A;
}

int input2()
{
	int B;
	printf("�������� �������� ��� ������� ������ [B]:  \n");
	scanf("%d",&B);
	return B;
}

void main_menu(int a, int b)
{
	int s,j=0;
	do
	{
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
		printf("�������������� ��� ���� [1] ��� ��� ������ ��� %d^%d\n\n",a,b);
		printf("�������������� ��� ���� [2] ��� ��� ������ ��� %d! %d! \n\n",a,b);
		printf("�������������� ��� ���� [3] ��� ��� ������ ��� ������� ��� ���������� %d ��� %d \n\n",a,b);
		printf("�������������� ��� ���� [4] ��� ��� ������ ���� ��� ��������.\n\n");
		printf("�������������� ��� ���� [5] ��� ��� �����\n\n");
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
		printf("������� -->  "); scanf("%d",&s);
		select(s,a,b);
		j=plhthos_epilogwn(j);
		}
	while (s !=5 );
	system ("cls");
	printf("�� ������ ��� �������� ��� ����� >>> %d\n\n\t-=|�� ��������� T�����������|=- \n\t\t  [Game Over]",j-1);
}

void select (int s, int a , int b)
{
	switch (s)
		{
			case 1:
				system ("cls");
				printf("� ������� ��� ����� � >>> [%d]",s);
				printf("\n\n�� ����� ��� ������� �����: \n\n\t�=%d\t&     �=%d\n\n\n",a,b);
				printf("\n� ������� %d �������� ���� ������ %d ����� --> %d\n\n",a,b,power(a,b)); 
				break;
			case 2:
				system ("cls");
				printf("� ������� ��� ����� � >>> [%d]",s);
				printf("\n\n�� ����� ��� ������� �����: \n\n\t�=%d\t&     �=%d\n\n\n",a,b);
				printf("\n�!= %d\tB!=%d\n\n",paragontiko(a),paragontiko(b)); 
				break;
			case 3:
				system ("cls");
				printf("� ������� ��� ����� � >>> [%d]\n",s);
				printf("�� ����� ��� ������� �����: A=%d & B=%d \n\n",a,b);
				
				if(validate_nums (a,b)==1)
				{
					printf("\n�� ������ ��� ���������� %d ��� %d ����� --> %d\n\n",a,b,num_combinations(a,b));
					break;
				}
				else
				{
					printf("\n��� ������ �� ����������� �� ������ ��� ���������� %d ��� %d �����:\n 1) E��� � ������� %d (�) ����� ���������� ��� ��� ������ %d (�)\n 2) ���� ��� ���� 2 (�=%d � �=%d) �������� ����� ���������.\n 3) � ������� %d (B) ����� ���� �� 0\n\n",a,b,a,b,a,b,b);
				}	break;
			case 4:
				system ("cls");
				printf("� ������� ��� ����� � >>> [%d]\n",s);
				printf("�� ����� ��� ������� �����: A=%d & B=%d \n",a,b);
				printf("\n[i]  � ������� %d �������� ���� ������ %d ����� --> %d\n",a,b,power(a,b)); 
				printf("[ii]  %d!= %d\t%d!=%d\n",a,paragontiko(a),b,paragontiko(b));
				if(validate_nums (a,b)==1)
				{
					printf("[iii]  �� ������ ��� ���������� %d ��� %d ����� --> %d\n",a,b,num_combinations(a,b));
					break;
				}
				else
				{
					printf("[iii]  ��� ������ �� ����������� �� ������ ��� ���������� %d ��� %d �����:\n 1) E��� � ������� %d (�) ����� ���������� ��� ��� ������ %d (�)\n 2) ���� ��� ���� 2 (�=%d � �=%d) �������� ����� ���������.\n 3) � ������� %d (B) ����� ���� �� 0\n\n",a,b,a,b,a,b,b);
				}	break;
				break;
				
			default:
				system("cls");
				printf("�������� �������� ��� ��� ��� �������� ��������.\n\n");
		}
}

int plhthos_epilogwn(j)
{
	j++;
	return j;
}

int power (int x , int y)
{
	int i,result=x;
	for (i=1; i<y; i++)
		result*=x;
	return result;
}

int paragontiko (int x)
{
	int i,result=1;
	for (i=1; i<=x; i++)
		result*=i;
	return result;
}

int validate_nums (int N, int K)
{
	if (N>=0 && K>0 && N>K)
		return 1;
	return 0;
}

int num_combinations(int N, int K)
{
	int combinations,x;
	int A= paragontiko (N);
	int B= paragontiko (K);
	int diff= N-K;
	x=paragontiko(diff);
	combinations= A/(B*x);
	return combinations;
}
