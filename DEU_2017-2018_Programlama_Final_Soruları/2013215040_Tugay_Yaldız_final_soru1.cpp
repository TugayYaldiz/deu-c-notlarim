#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/
#include <windows.h> /* Sleep() i�in b�y�k s ile bu miliseconds tarz�nda beklet�yo yan� 1 sn �c�n (1000)*/

void enBuyuk(int sayi, int *enbuyukk, int yer, int *enBuyukDP, int *enBSayisiP) {
	int gecici = *enbuyukk;
	if (sayi>gecici || sayi==gecici ) {
		*enbuyukk = sayi;
		int gecici2= *enBSayisiP;
	    enBuyukDP[gecici2] = yer;
	    *enBSayisiP=gecici2+1;
	}
	
}

void enKucuk(int sayi2, int *enkucukk, int yer2, int *enKucukDP, int *enKSayisiP) {
	int gecici = *enkucukk;
	if (sayi2<gecici || sayi2==gecici ) {
		*enkucukk = sayi2;
		int gecici2= *enKSayisiP;
	    enKucukDP[gecici2] = yer2;
	    *enKSayisiP=gecici2+1;
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	tekrar:
    system("cls");
    
	int sayilar[50],val; //sayilar dizisini a�t�m ama kullanmay� unutmusum line 63 de kullan�cakd�m
	int enBSayisi=0, enKSayisi=0;
	int enK=101,enB=0;
	int enBuyukD[50], enKucukD[50];
	double ort=0;
	int top=0;
	
	srand(time(NULL));
	
	for(int i=0;i<50;i++) {
		int r = rand();
	    val = (r % 100) + 1;
	    
	    while(val<10) {
	    	printf("Say� 10dan k�c�k oldu�u i�in tekrar �retildi.\n");
	    	int r = rand();
	    	val = (r % 100) + 1;
		}
		if (val>enB) {
			enB=val;
		}
		if (val<enK) {
			enK=val;
		}
		printf("%d. sayi=%d\n",i+1,val );
		sayilar[i]=val;	//burda g�ndermek yerine functiona baska bir for da gondericekdim
		top+=val;
	}
	
	for(int t=0;t<50;t++) {	//burda gondericekdim 
		enBuyuk(sayilar[t],&enB,t+1,&enBuyukD[0],&enBSayisi);
		enKucuk(sayilar[t],&enK,t+1,&enKucukD[0],&enKSayisi);
	}
	printf("------------------------\n"); // eksik olan ort k�sm�
	ort=top/50.00;
	printf("say�lar�n ortalamas�= %.2lf\n",ort); 
	printf("------------------------\n");
	printf("en buyuk sayi %d ve %d tane �retilmi� yerleri:\n",enB,enBSayisi);
	for (int j=0;j<enBSayisi;j++) { // burda da en b�y�k say�lar de�i�imindeki son 2 de�i�im g�z�k�yordu hardcoded son 2 dizi kalm�s debuglarken. eski g�nderdi�im kodda -2 de�il -1 yapsan�z en b�y�k ve yeri gozukur sadece
		
		printf("%d.s�rada \n",enBuyukD[j]);
	}
	printf("------------------------\n");
	printf("en kucuk say� %d ve %d tane �retilmi� yerleri:\n",enK,enKSayisi);
	for (int k=0;k<enKSayisi;k++) { // burda da en b�y�k say�lar de�i�imindeki son 2 de�i�im g�z�k�yordu hardcoded son 2 dizi kalm�s debuglarken. eski g�nderdi�im kodda -2 de�il -1 yapsan�z en k�c�k ve yeri gozukur sadece
		printf("%d.s�rada \n",enKucukD[k]);
	}
	
	//comment sat�r� olanlar haricinde geri kalan ayn�








	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}
    
    system("pause");
	/* sleep(1); // 1 sn bekletir */

}

