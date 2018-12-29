#include <stdio.h>

int main()
{
    //DİZİ ELEMANLARINI KULLANICIDAN OKUMA
    int a[5];
    for(int i=0;i<5;i++){
        printf("Lutfen bir sayi girin>");
        scanf("%d",&a[i]);
    }
    
    // EN BÜYÜK DEĞERİ BULMA
    int eb=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>eb)
            eb=a[i];
    }
    // EN KÜÇÜK DEĞERİ BULMA
    int ek=a[0];
    for (int i=1;i<5;i++){
        if(ek>a[i])
            ek=a[i];
    }
    //DEĞERLERİ TOPLAMA
    int toplam=0;
    for(int i=0;i<5;i++){
        
        toplam+=a[i];
    }
    // ÇIKTILAR
    float ortalama=(float)toplam/5;
    printf("En buyuk sayi %d\n",eb);
    printf("En kucuk sayi %d\n",ek);
    printf("Toplamlari %d\n",toplam);
    printf("Ortalamalari %f\n",ortalama);
}
