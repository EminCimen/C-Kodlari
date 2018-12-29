#include <stdio.h>

int main()
{
    //DİZİ ELEMANLARINI KULLANICIDAN OKUMA
    int a[8];
    for(int i=0;i<8;i++){
        printf("Lutfen bir sayi girin>");
        scanf("%d",&a[i]);
    }
    
    // 6 5 4
    int sayi1=a[0];
    int sayi2=a[0];
    int sayi3=a[0];
    for(int i=1;i<8;i++){
        if(a[i]>sayi1){
            sayi1=sayi2;
            sayi2=sayi3;
            sayi1=a[i];
            
        }
        else if(a[i]>sayi2){
            sayi2=sayi3;
            sayi2=a[i];
        }
        else if(a[i]>sayi3)
            sayi3=a[i];
    }
  
   
    // ÇIKTILAR
    
    printf("En buyuk sayilar %d,%d,%d\n",sayi1,sayi2,sayi3);

}
