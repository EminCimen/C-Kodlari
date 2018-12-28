#include <stdio.h>
void tekcift(int sayi)
{
	if(sayi%2==0)
	printf("%d, cift bir sayidir \n",sayi);
	else
	printf("%d tek bir sayidir\n",sayi);
	
}
int main(void)
{

int girilen_sayi;
	printf("Lutfen bir sayi giriniz>");
	scanf("%d",&girilen_sayi);
	tekcift(girilen_sayi);
	return 0;
    
}