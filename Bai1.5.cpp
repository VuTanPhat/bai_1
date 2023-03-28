#include<stdio.h>
#include<conio.h>
struct donthuc
{
	int a;
	int n;
};
typedef struct donthuc d;
void nhap(d &d)
{
	fflush(stdin);
	printf("nhap a: ");
	scanf("%d", &d.a);
	printf("nhap n: ");
	scanf("%d", &d.n);
}
void xuat(d &d)
{
	printf("%d*x^%d", d.a, d.n);
}
int main()
{
	donthuc d;
	nhap(d);
	xuat(d);
}
