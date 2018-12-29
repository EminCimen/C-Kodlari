#include <stdio.h>

int f(int x){
    printf("Fonksiyonun icindeki sayi %d\n",x);
    return 7; // Fonksiyon işlemlerini tamamladıktan sonra 7 değerini döndürecek dolayısıyla ekranda x'ten sonra 7 basılacak
}

void g(int x){
    printf("Fonksiyonun icindeki sayi %d\n",x);
}

int main()
{
   printf("%d\n",f(3)); // Ekran 3 ve 7 olmasını bekliyoruz.
   g(8); // Void fonksiyonu değer döndürmediği için printf'in içinde basamıyoruz.
   
}
