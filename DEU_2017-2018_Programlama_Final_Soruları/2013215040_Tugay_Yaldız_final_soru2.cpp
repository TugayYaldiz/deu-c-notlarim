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

void bul(char cumle[], char aKarakter,int sira) {
	if(aKarakter==cumle[sira]) {
		printf("%d. sýra\n",sira+1);
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	tekrar:
    system("cls");

	char cumle[1000];
	char karakter;
	int sayisi=0;
	
	printf("Bir cümle girin:");
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

