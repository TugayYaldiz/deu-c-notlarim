#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Turkish");
	int a,b,c;
	printf("1.sayýyý girin: ");
	scanf("%d", &a);
	printf("2.sayýyý girin: ");
	scanf("%d",&b);
	printf("3.sayýyý girin: ");
	scanf("%d",&c);
	printf("Girdiginiz sayýlarýn toplamý: %d ",(a+b+c));
	
}
