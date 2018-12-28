#include <stdio.h>

int main()
{
    int x=1;
    do{
        printf("%d\n",x);
        x=x+2;
    }
    while(x<=100);    
    return 0;
}