#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main() {
	int sayi;
	printf("bir sayi girin ");
	scanf("%d", &sayi);
	
	
	switch(sayi)
	{		
		case 1:			
			printf("pazartesi");
			break;
		case 2:
			printf("sal�");
			break;
		case 3:
			printf("carsamba");
			break;
		case 4:
			printf("persembe");
			break;
		case 5:
			printf("cuma");
			break;
		case 6:
			printf("cumartesi");
			break;
		case 7:
			printf("pazar");
			break;
		default: /* default ile caseler sa�lanmasa olu�acak durumu belirleriz like else */ 
			printf("girilen say� 1-7 aras� bir de�er de�il");
			break;
	}
}
