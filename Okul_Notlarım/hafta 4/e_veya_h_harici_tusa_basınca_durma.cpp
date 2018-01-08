#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int main() {
	char tus;
	printf("bir tusa basýn");
	tus=getche();
	/*int a=0;
	 while(a<10){
		printf("\n%d",a);
		if(a==3){
			break; // break döngüden cýkar
		}
		a++;
    } */
	
	
	while(tus=='e' || tus=='E' || tus=='h' || tus=='H') { // tuþun deðeri e,E,h,H 'a eþit olduðu sürece while'ýn içindekileri yap		
		system("cls");
		printf("%c ye bastýnýz ",tus);
		printf("\nbir tusa basýn");
		tus=getche();		
	}
	system("cls");
	printf("\nuygulama durdu");
	getchar();
}
