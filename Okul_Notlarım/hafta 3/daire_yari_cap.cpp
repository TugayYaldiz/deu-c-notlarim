#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Turkish");
	float pi=3.14;
	int a;
	printf("Dairen�n yar� cap�n� g�r�n: ");
	scanf("%d", &a);
	printf("Dairenin �evresi: %.2f, alan�: %.2f ", (2*pi*a),(pi*(a*a)));
	
}
