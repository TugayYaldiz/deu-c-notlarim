#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

/* dikkat edilmesi gerek
* Be aware that strtok() manipulates its input str directly. If you don't want its value to change, copy it to another c-string first before calling strtok()
*/
int main() {
	//setlocale(LC_ALL, "Turkish");
	int kelimesay,i=0,j=0;
	char str[1000];
	char ydk[1000];
	int ydk2;
	char kelimeler[1000][1000]; // kelýme sýnýrý 1000
	int degerler[1000]; // kelýme sýnrý 1000
	puts("Cumle giriniz...");
	gets(str);
	
	char * pch;
	printf ("Bolunecek kelime \"%s\"\n",str);
	pch = strtok (str," ,.-"); //  ,.-;:? burda belirlediklerimiz hangi þarta göre kelimeye ayýracagý örn: bosluklarý varsa kelýmeyapar, : ile birleþenleri kelimeye ayýrýr..., sadece bosluk ýstersek bosluk olarak býrakabýlýrýz
	while (pch != NULL)
	{
		strcpy(kelimeler[i],pch);
		degerler[i]=strlen(pch);		
		i+=1;
		
		printf ("%s, kelimenin uzunlugu=%d\n",pch,strlen(pch));		
		pch = strtok (NULL, " ,.-"); // bosluk , . - gordugu yere kadar gýdýyor ve bu karakterler pas gecýyor oraya kadar olan kýsmý alýyor bunlarý almýyor		
		kelimesay++;
	
	}
	
	/*printf("Kelime Sayýsý= %d\n",kelimesay);
	for(i=0;i<kelimesay;i++) {
		printf("%s==>%d\n",kelimeler[i],degerler[i]);
	}
	*/
	
	for(i=0;i<kelimesay;i++) {
		for(j=i+1;j<kelimesay;j++)
		{
			if(degerler[i]>degerler[j])
			{
				ydk2 = degerler[i];
				degerler[i]=degerler[j];
				degerler[j]=ydk2;
				strcpy(ydk, kelimeler[i]);
	            strcpy(kelimeler[i], kelimeler[j]);
	            strcpy(kelimeler[j], ydk);
			} // 2 buble sort yapmanýn sebebi bir kelime dizisi icin bir sayý dýzýlerý ýcýn unutma!
			if(degerler[i]==degerler[j]) { // eger uzunluklarý eþitse  alfabetik sýraya gore dýzýccz
				if(strcmp(kelimeler[i],kelimeler[j])>0){ // alfabetik sýraya gore dizmek ýcýn
					strcpy(ydk, kelimeler[i]);
		            strcpy(kelimeler[i], kelimeler[j]);
		            strcpy(kelimeler[j], ydk);
				}
			}
		}
	}
	puts("--------------------------------- Uzunluklarina gore duzenlenmis yeni kelime dizisi -----------------------------------");
	for(i=0;i<kelimesay;i++) {
		printf("%s ",kelimeler[i]);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

