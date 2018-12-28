#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,z;
    printf("Dik kenari giriniz>");
    scanf("%d",&y);
    printf("Diger dik kenari giriniz>");
    scanf("%d",&z);
    x=sqrt(y*y+z*z);
    printf("Hipotanus degeri %d",x);
    return 0;
}
