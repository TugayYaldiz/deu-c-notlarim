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

void bul(char cumle[], char aKarakter,int sira) {
	if(aKarakter==cumle[sira]) {
		printf("%d. s�ra\n",sira+1);
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	tekrar:
    system("cls");

	char cumle[1000];
	char karakter;
	int sayisi=0;
	
	printf("Bir c�mle girin:");
	gets(cumle);
	printf("Aranacak karakter:");
	
	karakter=getche();
	
	for(int j=0;j<strlen(cumle);j++) {
		if(karakter==cumle[j]) {
			sayisi++;
		}
	}
	printf("\n--------------------------\n");
	printf("aranan kelimeden %d tane bulundu\n",sayisi);
	for(int i=0;i<strlen(cumle);i++) {
		bul(cumle,karakter,i);
	}
	
	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}


	system("pause");
	/* sleep(1); // 1 sn bekletir */

}

