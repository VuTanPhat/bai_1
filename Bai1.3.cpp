#include<stdio.h>
#include<conio.h>
struct MP
{
	int x;
	int y;
};
typedef struct MP mp;
void nhap(mp &mp)
{
	fflush(stdin);
	printf("nhap x: ");
	scanf("%d", &mp.x);
	printf("nhap y: ");
	scanf("%d", &mp.y);
}
void xuat(mp &mp)
{
	printf("Mat phang Oxy (%d;%d)",mp.x,mp.y);
}
int main()
{
	MP mp;
	nhap(mp);
	xuat(mp);
}
