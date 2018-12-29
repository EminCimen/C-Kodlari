#include <stdio.h>
int ustalma(int taban, int ust){
    int sonuc=1;
    for(int i=1;i<=ust;i++){
        sonuc=sonuc*taban;
    }
    return sonuc;
}

int main()
{
    printf("%d\n",(ustalma(2,4)));
}
