#include<stdio.h>
#include<conio.h>
struct HonSo
{
    int Tu;
	int Mau;
	int Nguyen;
};
typedef struct HonSo HONNSO;
void NhapHonSo(HONNSO &);
void XuatHonSo(HONSO);
void NhapHonSo(HONSO &hs)
{	
	printf("Nhap nguyen: ");
    scanf("%d", &hs.Nguyen);
    printf("Nhap tu: ");
    scanf("%d", &hs.Tu);
    do
    {
        printf("Nhap mau: ");
        scanf("%d", &hs.Mau);
        if(hs.Mau== 0)
        {
            printf("Mau so phai khac 0");
        }
    }while(hs.Mau== 0);
}
void XuatHonSo(HONSO hs)
{
    printf("%d %d/%d",hs.SoNguyen,hs.TuSo, hs.MauSo);
}
int main()
{
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);
    getch();
    return 0;
}
