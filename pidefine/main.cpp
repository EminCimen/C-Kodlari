#include <stdio.h>
#define PI 3.14
int main(void)
{
	int yaricap;
	float alan;
	printf("yari capi giriniz");
	scanf("%d",&yaricap);
	alan=PI*yaricap*yaricap;
	printf("cember alani: %.2f\n",alan);
	
	return 0;
}