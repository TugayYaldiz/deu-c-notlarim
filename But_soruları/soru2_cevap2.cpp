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

void hesapla(int arr2[],int size2) {
	printf("\n");
	int finalToplam=0;
	for(int f=0;f<size2;f++) {
		printf("%d ",arr2[f]);
		finalToplam+=arr2[f];
	}
	printf(": %d",finalToplam);
}

void sonuc(int *arr,int size) {
	int temp[size];
	for(int cop=0;cop<size;cop++) {
		temp[cop] = arr[cop];
	}
	int toplam[size];
	for(int j=0; j<size; j++) {
		
		for(int x=0; x<size; x++) {
			printf("%d ",temp[x]);	
		}
		printf(": %d",temp[size-1] + temp[size-2]);
		toplam[j]=temp[size-1] + temp[size-2];
		for(int change=0;change<size; change++) {
			if(change==0){
				arr[change]=temp[size-1];
			} else{
				arr[change]=temp[change-1];	
			}			
		}		
		for(int cop2=0;cop2<size;cop2++) {
			temp[cop2] = arr[cop2];
		}
		printf("\n");
	}
	hesapla(toplam,size);
}
int main() {
	//setlocale(LC_ALL, "Turkish");
	tekrar:
	system("cls");
	int sayi;
	printf("Bir sayi girin:");
	scanf("%d",&sayi);
	int dizi[sayi];
	for(int i=sayi,t=0; i>0; i--,t++) {
		dizi[t] = i;
	}
	
	sonuc(dizi,sayi);
	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}
}

