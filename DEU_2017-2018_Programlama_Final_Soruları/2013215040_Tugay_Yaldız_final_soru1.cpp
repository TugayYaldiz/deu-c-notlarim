#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#include <windows.h> /* Sleep() için büyük s ile bu miliseconds tarzýnda bekletýyo yaný 1 sn ýcýn (1000)*/

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
    
	int sayilar[50],val; //sayilar dizisini açtým ama kullanmayý unutmusum line 63 de kullanýcakdým
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
	    	printf("Sayý 10dan kücük olduðu için tekrar üretildi.\n");
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
		sayilar[i]=val;	//burda göndermek yerine functiona baska bir for da gondericekdim
		top+=val;
	}
	
	for(int t=0;t<50;t++) {	//burda gondericekdim 
		enBuyuk(sayilar[t],&enB,t+1,&enBuyukD[0],&enBSayisi);
		enKucuk(sayilar[t],&enK,t+1,&enKucukD[0],&enKSayisi);
	}
	printf("------------------------\n"); // eksik olan ort kýsmý
	ort=top/50.00;
	printf("sayýlarýn ortalamasý= %.2lf\n",ort); 
	printf("------------------------\n");
	printf("en buyuk sayi %d ve %d tane üretilmiþ yerleri:\n",enB,enBSayisi);
	for (int j=0;j<enBSayisi;j++) { // burda da en büyük sayýlar deðiþimindeki son 2 deðiþim gözüküyordu hardcoded son 2 dizi kalmýs debuglarken. eski gönderdiðim kodda -2 deðil -1 yapsanýz en büyük ve yeri gozukur sadece
		
		printf("%d.sýrada \n",enBuyukD[j]);
	}
	printf("------------------------\n");
	printf("en kucuk sayý %d ve %d tane üretilmiþ yerleri:\n",enK,enKSayisi);
	for (int k=0;k<enKSayisi;k++) { // burda da en büyük sayýlar deðiþimindeki son 2 deðiþim gözüküyordu hardcoded son 2 dizi kalmýs debuglarken. eski gönderdiðim kodda -2 deðil -1 yapsanýz en kücük ve yeri gozukur sadece
		printf("%d.sýrada \n",enKucukD[k]);
	}
	
	//comment satýrý olanlar haricinde geri kalan ayný








	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}
    
    system("pause");
	/* sleep(1); // 1 sn bekletir */

}

