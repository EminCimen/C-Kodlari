#include <stdio.h>
#define PI 3.14
int main(void)
{
	#undef PI
	int yaricap;
	float alan;
	printf("yari capi giriniz");
	scanf("%d",&yaricap);
	#ifdef PI
	alan=PI*yaricap*yaricap;
	printf("cember alani: %.2f\n",alan);
	#else
	printf("HATA: Alan degeri tanimli degildir.\n");
	#endif
	
	return 0;
}