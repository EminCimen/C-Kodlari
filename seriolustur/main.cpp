#include <stdio.h>
void seri(int);

int main(void){
    seri(5);
}

void seri(int sayi){
    if (sayi <= 13){
        printf("%d\n",sayi);
        sayi=sayi+4;
        seri(sayi);
    }
}