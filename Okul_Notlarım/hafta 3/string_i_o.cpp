#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
#include <conio.h> // getche() icin  lazým
#include <string.h> // strlen için gerekli kütüphane
int main () {
	setlocale(LC_ALL, "Turkish");
	char a;
	printf("karakter grin:");
	a = getche(); // getche karakter almak ýcýn, entere basmadan iþler
	printf("\ngirdiginiz karakter %c - %d",a,a);
	
	char isim[20];
	printf("\nisim giriniz\n");
	scanf("%s", isim); // dizimlerde int veya charda oldugu gýbý & kullannmamýza gerek yok
	printf("isminiz %s\n",isim);
	printf("%d isim uzunlugu\n",strlen(isim));
	return 0;
	
}
