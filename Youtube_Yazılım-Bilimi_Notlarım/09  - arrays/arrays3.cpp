#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

// string dizileri

int main() {
	setlocale(LC_ALL, "Turkish");

	/* char isim[] = "Tugay"; // bu bellekde 'T','u','g','a','y' sekl�nde duruyor.
	printf("%c", isim[10]); */
	
	char isim[3];
	printf("�smini gir:");
	scanf("%s", isim); // char dizisi al�rken bas�na & koymaya gerek yok, scanf bosluga kadar al�r boslukdan sonras�n� almaz
	//gets(isim);	// gets bosluklar�da al�r entere basana kadar ne varsa diziye atar
	//int x=strlen(isim);
	//printf("%d",x);
	printf("�sminiz: %s",isim); //%s ile bas�yoruz stringi









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

