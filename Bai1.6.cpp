#include<stdio.h>
#include<conio.h>
struct dathuc
{
	int a;
	int n;
};
typedef struct dathuc dt;
void nhap(dt &dt)
{
	fflush(stdin);
	printf("nhap a: ");
	scanf("%d", &dt.a);
	printf("nhap n: ");
	scanf("%d", &dt.n);
}
void xuat(dt &dt)
{
	for(int i=0;i<=dt.n;dt.n--)
	{
		printf("%d*%d*x^%d+0", dt.a, dt.n, dt.n);
	}
}
int main()
{
	dathuc dt;
	nhap(dt);
	xuat(dt);
}
