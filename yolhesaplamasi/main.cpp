#include <stdio.h>

int main()
{
    int yol, hiz, zaman;
    printf("Olculen yolu giriniz>");
    scanf("%d",&yol);
    printf("Ortalama hizi giriniz");
    scanf("%d",&hiz);
    zaman=yol/hiz;
    printf("Tahmini yol suresi %d saat",zaman);
    float dakikakismi= (float)yol/hiz-yol/hiz;
    int dakika= dakikakismi*60;
    printf("ve %d dakikadir",dakika);
    return 0;
    
}
