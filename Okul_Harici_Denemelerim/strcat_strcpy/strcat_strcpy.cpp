#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");
	char dizi[100] = "Tugay ";	
	/*char dizi[3];
	gets(dizi);*/
	strcat(dizi, "Naber "); // diziye yeni bi�ey ekler strcat(nereyeEklencek, NeyEklencek)
	strcat(dizi, "�yi ");
	strcat(dizi, "Senden ");
	printf("%s \n", dizi);

	strcpy(dizi, "Yeni de�er"); // yeni de�er ile d�i�tirme strcpy(de�i�ecekDeger, YeniDe�er) ***** strcpy(dizi[1], "Yeni de�er") gibi de kullan�l�yormu bak
	printf("%s \n", dizi);
	
	/*
	while(1) {
		system("cls");
		strcat(dizi, "Naber ");
		printf("%s \n", dizi);
		sleep(1);
		strcat(dizi, "�yi ");
		printf("%s \n", dizi);
		sleep(1);
		strcat(dizi, "Senden ");
		printf("%s \n", dizi);
		sleep(1);
		strcpy(dizi, "Yeni de�er");
		printf("%s \n", dizi);
		sleep(1);
	}
	*/







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

