#include <stdio.h>

int main()
{
    int sayi,toplam;
    printf("Kaca kadar olan sayilar>");
    scanf("%d",&sayi);
    for(int i=0;i<=sayi;i++)
        {
    toplam=(i*i)+toplam;
    }
    printf("SAYILARIN KARELERI TOPLAMI %d",toplam);
    return 0;
}
