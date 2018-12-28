#include <stdio.h>
#define ekrana_yazdir printf
#define deger_al scanf
#define PI 3.14
int main(void)
{
	int yaricap;
	float alan;
	ekrana_yazdir("yari capi giriniz");
	deger_al("%d",&yaricap);
	alan=PI*yaricap*yaricap;
	ekrana_yazdir("cember alani: %.2f\n",alan);
	
	return 0;
}