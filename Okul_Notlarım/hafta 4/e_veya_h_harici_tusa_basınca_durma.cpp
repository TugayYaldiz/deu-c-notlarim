#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main() {
	char tus;
	printf("bir tusa bas�n");
	tus=getche();
	/*int a=0;
	 while(a<10){
		printf("\n%d",a);
		if(a==3){
			break; // break d�ng�den c�kar
		}
		a++;
    } */
	
	
	while(tus=='e' || tus=='E' || tus=='h' || tus=='H') { // tu�un de�eri e,E,h,H 'a e�it oldu�u s�rece while'�n i�indekileri yap		
		system("cls");
		printf("%c ye bast�n�z ",tus);
		printf("\nbir tusa bas�n");
		tus=getche();		
	}
	system("cls");
	printf("\nuygulama durdu");
	getchar();
}
