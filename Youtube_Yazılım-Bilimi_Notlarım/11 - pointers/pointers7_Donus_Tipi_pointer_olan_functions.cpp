#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

char *dondur(char *p, int index) { // fonksiyon pointer d�nd�rece�i icin fonks�yon ad�n�n ba��na * koyduks
	int uzunluk = strlen(p);
	
	if ( index > uzunluk ){
		return NULL; // pointer h�cb�yer� gostermes�n eger pass ettigimiz uzunluk array�n boyundan b�y�kse
	} else {
		return p+index; // dzide gelen deger kadar karakter atla ve dizi sonuna kadar yaz
	}
}


int main() {
	//setlocale(LC_ALL, "Turkish");

	char dizi[] = "Yazilim";
	
	char *p = dondur(dizi,2); // burdaki 2 degeri �u anlama gel�yor fonks�yonun �c�nde dizide x karakter atla gerisini yaz d�yoruz bu 2 x i temsil ediyo
	// pointer daha yarat�l�rken bir pointer donen fonks�yonda deger g�nderilip bu degerler i�leme sokularak d�nen de�er ile yarat�ld�
	if ( p == NULL ){
		printf("Pointer NULL dondu.");
	} else {
		printf("%s",p);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

