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


struct Ogrenci degerAl() { // struct return edecek fonksiyon olu�turduk
	struct Ogrenci yeni;
	printf("Ogrenci bilgilerini bosluk b�rakarak girin. �rn: Ad bo�luk soyad bosluk numara ");
	scanf("%s %s %d", &yeni.isim, &yeni.soyisim, &yeni.numara);
	return yeni;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1 = degerAl(); // struct donen bir fonks�yona git 

	goster(ogrenci1); //ogrenci1 zaten struct tipinde







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

