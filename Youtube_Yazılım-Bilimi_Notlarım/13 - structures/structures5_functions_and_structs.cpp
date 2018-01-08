#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct Ogrenci a) { // parametre olarak bir struct aldýk
	printf("Ogrenci bilgileri: %s %s %d", a.isim, a.soyisim, a.numara);
}

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1 = {
		"Tugay",
		"Yaldýz",
		22
	};

	goster(ogrenci1); //ogrenci1 zaten struct tipinde







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

