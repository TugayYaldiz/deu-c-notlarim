#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

char *gunIsmi(char *gundizisi[], int uzunluk, int hangiGun) {
	
	if ( hangiGun>=1 && hangiGun<=uzunluk ) {
		return gundizisi[hangiGun-1];
	} else {
		return NULL;
	}
	
	
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	//char *gunler[7]; //char pointerý tutan array dizisini bu sekýlde tanýmlýyoruz basýna * koyarak bu sekýdle yazarsak 7 tanesýde çöp adres tutar saglýký deðil oyuzden alttaki gibi baslatýcaz
	char *gunler[7] = {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"}; 
	
	char *p = gunIsmi(gunler,7,5);

	if(p == NULL) {
		printf("NULL dondu.");
	} else {
		printf("%s", p);
	}






	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

