#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct Ogrenci a) { // parametre olarak bir struct ald�k
	printf("Ogrenci bilgileri: %s %s %d", a.isim, a.soyisim, a.numara);
}

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1 = {
		"Tugay",
		"Yald�z",
		22
	};

	goster(ogrenci1); //ogrenci1 zaten struct tipinde







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

