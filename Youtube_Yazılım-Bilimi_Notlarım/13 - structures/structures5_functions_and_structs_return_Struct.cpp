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


struct Ogrenci degerAl() { // struct return edecek fonksiyon oluþturduk
	struct Ogrenci yeni;
	printf("Ogrenci bilgilerini bosluk býrakarak girin. Örn: Ad boþluk soyad bosluk numara ");
	scanf("%s %s %d", &yeni.isim, &yeni.soyisim, &yeni.numara);
	return yeni;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1 = degerAl(); // struct donen bir fonksýyona git 

	goster(ogrenci1); //ogrenci1 zaten struct tipinde







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

