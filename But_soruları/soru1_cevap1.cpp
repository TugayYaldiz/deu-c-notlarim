#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/
#include <windows.h> /* Sleep() i�in b�y�k s ile bu miliseconds tarz�nda beklet�yo yan� 1 sn �c�n (1000)*/

int main() {
	//setlocale(LC_ALL, "Turkish");
	tekrar:
	system("cls");
	srand(time(NULL));
	int deger=0;
	int sayac=0;
	int saat=0;
	while(deger<5500) {
		int m1= (rand() % (4 + 1 - 2)) + 2;
		int m2=(rand() % (5 + 1 - 3)) + 3;
		int m3=(rand() % (7 + 1 - 6)) + 6;
		int m4=(rand() % 3) + 1;

		deger+=(m1+m2+m3)-m4;
		if(sayac==60) {
			saat++;
			sayac=0;
		} else {
			sayac++;	
		}
		
	}
	printf("%d saat %d dakikada doldu.",saat,sayac);
	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}
}

