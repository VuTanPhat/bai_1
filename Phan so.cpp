#include<stdio.h>
#include<conio.h>
struct Phanso
{	
	int tu;
	int mau;
};
typedef struct Phanso PHANSO;
void NhapPhanso(PHANSO &);
void XuatPhanso(PHANSO);
void NhapPhanso(PHANSO &ps)	
{
	printf("nhap tu:");
	scanf("%d",&ps.tu);
	do
	{
		printf("nhap mau:");
		scanf("%d",&ps.mau);
		if(ps.mau==0)
		{
			printf("mau phai khac 0");
		}
	}while (ps.mau==0);
}
void XuatPhanso(PHANSO ps)
{
	printf("%d/%d",ps.tu,ps.mau);
}
int main()
{
PHANSO ps;
NhapPhanso(ps);
XuatPhanso(ps);
getch();
return 0;
}
