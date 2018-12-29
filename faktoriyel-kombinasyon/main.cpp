#include <stdio.h>

int faktoriyel(int x){
    int carpim=1; // 0'dan başlatmıyorum çünkü sıfır hepsini yutucuuu
    for(int i=x;i>0;i--){
        carpim=carpim*i; // carpim*=i
    }
    return carpim;
}

int kombinasyon(int n, int r){
    
    return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
    
}

int main()
{
    printf("%d\n",(faktoriyel(3)));
    printf("%d\n",(faktoriyel(6)));
    printf("%d\n",(kombinasyon(5,2)));
}
