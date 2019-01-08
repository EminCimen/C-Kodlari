#include <stdio.h>
void hata_bastir(){
    printf("Negatif");
}
int main(){
    int a,b,toplam;
    printf("Birinci sayiyi giriniz");
    scanf("%d",&a);
    printf("Ikinci sayiyi giriniz");
    scanf("%d",&b);
    toplam=a+b;
    if(toplam<0)
        hata_bastir();
        else
            printf("Toplam sifirdan buyuk yani pozitif");
            
}