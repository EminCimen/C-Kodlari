#include <stdio.h>
void catiyi_ciz(void)
{
	printf("     /\\		\n");
	printf("    /  \\		\n");
	printf("   /    \\		\n");
	printf("  /      \\		\n");
	printf(" ----------		\n");
}
void kat_ciz(char sol, char sag)
{

	printf(" %c  2018  %c     \n",sol,sag);
	printf(" %c  EMIN  %c     \n",sol,sag);
	printf(" %c INSAAT %c     \n",sol,sag);
	
}
void taban_ciz(char alt)
{
	printf(" %c%c%c%c%c%c%c%c%c     \n",alt,alt,alt,alt,alt,alt,alt,alt,alt);
}
int main(void)
{
	char sol_duvar, sag_duvar,alt;
	printf("Kullanilacak karakter>");
	scanf("%c %c %c",&sol_duvar,&sag_duvar,&alt); // 3 FARKLI KARAKTERI KULLANICIDAN ALIYORUZ
	catiyi_ciz();
	kat_ciz(sol_duvar,sag_duvar);
	taban_ciz(alt);
	kat_ciz(sol_duvar,sag_duvar);
	taban_ciz(alt);
	kat_ciz(sol_duvar,sag_duvar);
	taban_ciz(alt);
	return 0;
}
	