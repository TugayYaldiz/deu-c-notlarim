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
	printf("a n�n degeri %d",(a<b)?a++:++a);
	printf("\na n�n degeri %d",a+=(++a)); // ++a a n�n deger�n� hemen deg�st�r�r �slem yapar oyuzden sonuc 9 deg�lde 10
	
}
