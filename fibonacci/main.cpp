#include <stdio.h>

int main()
{
    int u;
    int a=1;
    int b=1;
    
   printf("Bir sayi giriniz>");
   scanf("%d",&u);
   printf("%d\n%d\n",a,b);
   for(int i=0;i<u-2;i++){
       int c=a+b;
       a=b;
       b=c;
       printf("%d\n",c);
       
   }
       
    
    
    
    
}
