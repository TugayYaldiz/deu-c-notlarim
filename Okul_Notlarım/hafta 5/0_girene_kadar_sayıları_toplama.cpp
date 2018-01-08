#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi,toplam=0,gs=0;
	printf("bir sayi girin ");
	scanf("%d", &sayi);
	toplam+=sayi;
	gs+=1;
			
	while(sayi!=0) {
		system("cls");
		printf("bir sayý girin ");
		scanf("%d" ,&sayi);
		toplam+=sayi;
		gs+=1;		
	}
	
	
	printf("toplam= %d\n",toplam);
	printf("girilen sayý adeti= %d\n",gs-1);
	
}
