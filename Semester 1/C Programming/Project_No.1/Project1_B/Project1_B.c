#include <stdio.h>
#include <math.h>
int main()
{
	system("chcp 1253");
	double Mhkos_akmhs_Kyvou;
	double Ogkos_Kyvou,Emvadon_Kyvou;
	double Ogkos_Sfairas,Emvadon_Sfairas;
	const double pi = 3.14;
	printf("���� �� ��������� �� ������� �� ������ �� ����� ��� ����� ���� ����� �� ����� (m)");
	printf("��� ������ �� ��������� �� ������� ��� ��� ���� ��� ������������� �����.\n");
	printf("�������� �� ���������� ��� ������� ��� ��� ���� ���� ������� ����������� ����� ��� ���� ����� ��� ����� ");
	printf("�� ����� (m) ��� ������ ������������.\n");
	printf("-/============================oooo=============================\\- \n\n\n\n\n");
	/*                                                                                                               */
	printf("�������� �� ����� ����� ��� ����� �� ����� (m) >>> ");
	scanf("%lf",&Mhkos_akmhs_Kyvou);
	printf("\n\n");
	Ogkos_Kyvou= pow(Mhkos_akmhs_Kyvou,3);
	Emvadon_Kyvou= 6 * pow(Mhkos_akmhs_Kyvou,2);
	Ogkos_Sfairas= 4* pi * pow(Mhkos_akmhs_Kyvou,2);
	Emvadon_Sfairas= (4.0/3) * pi * pow(Mhkos_akmhs_Kyvou,3);
	/*                                                                                                               */
	printf("\t\t\t\t/--(�����)--/\n\n\n");
	printf("- � ����� ���� ����� ���� �� ����� ����� ��� �� ����� (m) \n  ���� ��� ����: %lf\n",Mhkos_akmhs_Kyvou);
	printf("����� -->   \t\t\t %lf",Ogkos_Kyvou);
	printf("   \t\t\t<--\n\n\n");
	printf("- �� ������� ���� ����� ���� �� ����� ����� ��� �� ����� (m) \n  ���� ��� ����: %lf\n",Mhkos_akmhs_Kyvou);
	printf("����� -->   \t\t\t %lf",Emvadon_Kyvou);
	printf("   \t\t\t<--\n\n\n");
	printf("\t\t\t\t/--(������)--/\n\n\n");
	printf("- � ����� ���� ������� ���� �� ����� ����� �� ��� ������ �� ����� (m) \n  ���� ��� ����: %lf\n",Mhkos_akmhs_Kyvou);
	printf("����� -->   \t\t\t %lf",Ogkos_Sfairas);
	printf("   \t\t\t<--\n\n\n");
	printf("- �� ������� ���� ������� ���� �� ����� ����� �� ��� ������ �� ����� (m) \n  ���� ��� ����: %lf\n",Mhkos_akmhs_Kyvou);
	printf("����� -->   \t\t\t %lf",Emvadon_Sfairas);
	printf("   \t\t\t<--\n");
	return 0;
}
