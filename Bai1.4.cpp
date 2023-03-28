#include<stdio.h>
#include<conio.h>
struct Bachieu
{
	int x,y,z;
};
typedef struct Bachieu B;
void nhap(B &b)
{
	fflush(stdin);
	printf("nhap x: ");
	scanf("%d", &b.x);
	printf("nhap y: ");
	scanf("%d", &b.y);
	printf("nhap z: ");
	scanf("%d", &b.z);
}
void xuat(B &b)
{
	printf("Mat phang Oxy (%d;%d)",b.x,b.y,b.z);
}
int main()
{
	Bachieu B;
	nhap(B);
	xuat(B);
}
