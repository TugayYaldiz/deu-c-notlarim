#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Turkish");
	int a,b,c;
	printf("1.say�y� girin: ");
	scanf("%d", &a);
	printf("2.say�y� girin: ");
	scanf("%d",&b);
	printf("3.say�y� girin: ");
	scanf("%d",&c);
	printf("Girdiginiz say�lar�n toplam�: %d ",(a+b+c));
	
}
