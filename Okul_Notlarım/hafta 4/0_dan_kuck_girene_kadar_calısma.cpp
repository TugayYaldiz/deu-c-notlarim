#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main() {
	
	int sayi;
	printf("bir sayi girin ");
	scanf("%d", &sayi);
	while(sayi>=0) {
		/*system("cls");*/	
		printf("bir sayi girin ");
		scanf("%d", &sayi);		
	}
	printf("\n0 dan kucuk sayi girdiniz");
	getchar();
}
