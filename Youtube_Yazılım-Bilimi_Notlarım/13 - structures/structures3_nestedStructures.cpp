#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


struct Adress {
	
	char mahalle[15];
	char cadde[20];
	char sokak[15];
	
};

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct Adress adresi; // baskabir yap� nesnes� yaratt�k
};

int main() {
	//setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim, "Tugay");
	strcpy(ogrenci1.soyisim, "YALDIZ");
	ogrenci1.numara = 40;
	ogrenci1.yas = 22;
	// yap� �c�ndek� yap�ya er�st�g�m�zde 2. yap�n�nda eleman�na er�smem�z laz�m ogrenci1.adresi ile Adress struct�na eristik bir . daha koyarak onunda i�ine ula�t�k
	strcpy(ogrenci1.adresi.mahalle, "X Mahallesi"); 
	strcpy(ogrenci1.adresi.cadde, "7.cadde");
	strcpy(ogrenci1.adresi.sokak, "5358.sokak");

	printf("%s %s %d %d %s %s %s", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara, ogrenci1.yas, ogrenci1.adresi.mahalle, ogrenci1.adresi.cadde, ogrenci1.adresi.sokak);




	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

