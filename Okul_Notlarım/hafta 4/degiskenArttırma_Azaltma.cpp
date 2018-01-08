#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <locale.h>

int main() {
	int a=3;
	int b=3;
	printf("%d\n",++a);
	printf("%d\n",a);
	printf("%d\n",a++);
	printf("%d\n",a);
	printf("a nýn degeri %d",(a<b)?a++:++a);
	printf("\na nýn degeri %d",a+=(++a)); // ++a a nýn degerýný hemen degýstýrýr ýslem yapar oyuzden sonuc 9 degýlde 10
	
}
