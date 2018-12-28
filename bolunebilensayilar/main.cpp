#include <stdio.h>

int main()
{
    int x=1;
    while(x<=100){
        if(x%7==0){
            printf("%d\n",x);
            
        }
        x++;
    }
    
    return 0;
}