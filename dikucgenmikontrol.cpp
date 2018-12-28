#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Bir kenari giriniz>");
    scanf("%d",&a);
    printf("Diger kenari giriniz>");
    scanf("%d",&b);
    printf("Bir tane daha kenari giriniz>");
    scanf("%d",&c);
    if(a*a+b*b==c*c ||c*c+b*b==a*a || a*a+c*c==b*b)
    printf("Tebrikler bir dik ucgen buldunuz\n");
    else
    printf("Sorry bro, not this time\n");
    return 0;
}
    
