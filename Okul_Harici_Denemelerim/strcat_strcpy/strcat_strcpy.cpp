#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");
	char dizi[100] = "Tugay ";	
	/*char dizi[3];
	gets(dizi);*/
	strcat(dizi, "Naber "); // diziye yeni biþey ekler strcat(nereyeEklencek, NeyEklencek)
	strcat(dizi, "Ýyi ");
	strcat(dizi, "Senden ");
	printf("%s \n", dizi);

	strcpy(dizi, "Yeni deðer"); // yeni deðer ile dðiþtirme strcpy(deðiþecekDeger, YeniDeðer) ***** strcpy(dizi[1], "Yeni deðer") gibi de kullanýlýyormu bak
	printf("%s \n", dizi);
	
	/*
	while(1) {
		system("cls");
		strcat(dizi, "Naber ");
		printf("%s \n", dizi);
		sleep(1);
		strcat(dizi, "Ýyi ");
		printf("%s \n", dizi);
		sleep(1);
		strcat(dizi, "Senden ");
		printf("%s \n", dizi);
		sleep(1);
		strcpy(dizi, "Yeni deðer");
		printf("%s \n", dizi);
		sleep(1);
	}
	*/







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

