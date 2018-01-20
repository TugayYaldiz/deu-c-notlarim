#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#include <windows.h> /* Sleep() için büyük s ile bu miliseconds tarzýnda bekletýyo yaný 1 sn ýcýn (1000)*/

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

