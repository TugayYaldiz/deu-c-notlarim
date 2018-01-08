#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

char *gunIsmi(char *gundizisi[], int uzunluk, int hangiGun) {
	
	if ( hangiGun>=1 && hangiGun<=uzunluk ) {
		return gundizisi[hangiGun-1];
	} else {
		return NULL;
	}
	
	
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	//char *gunler[7]; //char pointer� tutan array dizisini bu sek�lde tan�ml�yoruz bas�na * koyarak bu sek�dle yazarsak 7 tanes�de ��p adres tutar sagl�k� de�il oyuzden alttaki gibi baslat�caz
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

