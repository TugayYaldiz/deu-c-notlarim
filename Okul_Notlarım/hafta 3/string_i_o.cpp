#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
#include <conio.h> // getche() icin  laz�m
#include <string.h> // strlen i�in gerekli k�t�phane
int main () {
	setlocale(LC_ALL, "Turkish");
	char a;
	printf("karakter grin:");
	a = getche(); // getche karakter almak �c�n, entere basmadan i�ler
	printf("\ngirdiginiz karakter %c - %d",a,a);
	
	char isim[20];
	printf("\nisim giriniz\n");
	scanf("%s", isim); // dizimlerde int veya charda oldugu g�b� & kullannmam�za gerek yok
	printf("isminiz %s\n",isim);
	printf("%d isim uzunlugu\n",strlen(isim));
	return 0;
	
}
