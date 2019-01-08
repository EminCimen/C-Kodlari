#include<stdio.h>
int main(){
    
    int a[5];
    for(int i=0;i<5;i++){
    printf("Lutfen bir sayi giriniz>");
    scanf("%d",&a[i]);
}
    printf("Sayilarinizin tersten yazilisi soyledir>\n");

        for(int i=4;0<=i;i--){
    printf("%d\n",a[i]);
}

}
