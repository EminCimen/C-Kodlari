#include<stdio.h>

int bolme (int a, int b)
{
    
	return a/b;
    
	
}

	int main(void)
	{
		int a,b;
		printf("Sayilari girin>");
		scanf("%d %d",&a,&b);
        if (a%b==0)
		printf("Bolme sonucu %d\n",(bolme(a,b))); //FLOAT OLARAK ALMADIGIMIZ İÇİN TAM BÖLÜNEN SAYILARIN SONUCUNU VERECEK
        else
            printf("BU SAYILAR TAM BOLUNMEZ\n");
		return 0;
	}