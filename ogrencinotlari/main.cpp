#include <stdio.h>

int main()
{
    //DİZİ ELEMANLARINI KULLANICIDAN OKUMA
    int a[5];
    for(int i=0;i<5;i++){
        printf("Lutfen notlari girin>");
        scanf("%d",&a[i]);
    }

    
    int toplam=0;
    for(int i=0;i<5;i++){
        
        toplam+=a[i];
    }
    int ortalama=toplam/5;
    for(int i=1;i<5;i++){
      if(a[i]>=ortalama)
          printf("Gecen notlar %d\n",a[i]);
  }
  
}
   
    // ÇIKTILAR
    


