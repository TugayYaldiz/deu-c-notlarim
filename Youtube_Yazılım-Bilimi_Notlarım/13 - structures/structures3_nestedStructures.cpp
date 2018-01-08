#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


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
	struct Adress adresi; // baskabir yapý nesnesý yarattýk
};

int main() {
	//setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim, "Tugay");
	strcpy(ogrenci1.soyisim, "YALDIZ");
	ogrenci1.numara = 40;
	ogrenci1.yas = 22;
	// yapý ýcýndeký yapýya erýstýgýmýzde 2. yapýnýnda elemanýna erýsmemýz lazým ogrenci1.adresi ile Adress structýna eristik bir . daha koyarak onunda içine ulaþtýk
	strcpy(ogrenci1.adresi.mahalle, "X Mahallesi"); 
	strcpy(ogrenci1.adresi.cadde, "7.cadde");
	strcpy(ogrenci1.adresi.sokak, "5358.sokak");

	printf("%s %s %d %d %s %s %s", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara, ogrenci1.yas, ogrenci1.adresi.mahalle, ogrenci1.adresi.cadde, ogrenci1.adresi.sokak);




	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

