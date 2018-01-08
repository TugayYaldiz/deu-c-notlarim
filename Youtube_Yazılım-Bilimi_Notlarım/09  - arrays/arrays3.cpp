#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

// string dizileri

int main() {
	setlocale(LC_ALL, "Turkish");

	/* char isim[] = "Tugay"; // bu bellekde 'T','u','g','a','y' seklýnde duruyor.
	printf("%c", isim[10]); */
	
	char isim[3];
	printf("Ýsmini gir:");
	scanf("%s", isim); // char dizisi alýrken basýna & koymaya gerek yok, scanf bosluga kadar alýr boslukdan sonrasýný almaz
	//gets(isim);	// gets bosluklarýda alýr entere basana kadar ne varsa diziye atar
	//int x=strlen(isim);
	//printf("%d",x);
	printf("Ýsminiz: %s",isim); //%s ile basýyoruz stringi









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

