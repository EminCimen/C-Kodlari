#include <stdio.h>
    int faktoriyel(int a){
        if(a==1) // 1 Faktoriyel 1 e eşit olduğu için 1 döndürüyor
            return 1;
        else
        return a*faktoriyel(a-1); // her seferinde bir eksilterek kendisini çağırıyor
    }


int main()
{
    printf("%d\n",(faktoriyel(5)));
    
}
