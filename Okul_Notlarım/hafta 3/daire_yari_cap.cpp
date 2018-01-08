#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Turkish");
	float pi=3.14;
	int a;
	printf("Dairenýn yarý capýný gýrýn: ");
	scanf("%d", &a);
	printf("Dairenin çevresi: %.2f, alaný: %.2f ", (2*pi*a),(pi*(a*a)));
	
}
