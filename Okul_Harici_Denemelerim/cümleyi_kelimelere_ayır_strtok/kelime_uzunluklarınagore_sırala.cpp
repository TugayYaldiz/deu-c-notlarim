#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

/* dikkat edilmesi gerek
* Be aware that strtok() manipulates its input str directly. If you don't want its value to change, copy it to another c-string first before calling strtok()
*/
int main() {
	//setlocale(LC_ALL, "Turkish");
	int kelimesay,i=0,j=0;
	char str[1000];
	char ydk[1000];
	int ydk2;
	char kelimeler[1000][1000]; // kel�me s�n�r� 1000
	int degerler[1000]; // kel�me s�nr� 1000
	puts("Cumle giriniz...");
	gets(str);
	
	char * pch;
	printf ("Bolunecek kelime \"%s\"\n",str);
	pch = strtok (str," ,.-"); //  ,.-;:? burda belirlediklerimiz hangi �arta g�re kelimeye ay�racag� �rn: bosluklar� varsa kel�meyapar, : ile birle�enleri kelimeye ay�r�r..., sadece bosluk �stersek bosluk olarak b�rakab�l�r�z
	while (pch != NULL)
	{
		strcpy(kelimeler[i],pch);
		degerler[i]=strlen(pch);		
		i+=1;
		
		printf ("%s, kelimenin uzunlugu=%d\n",pch,strlen(pch));		
		pch = strtok (NULL, " ,.-"); // bosluk , . - gordugu yere kadar g�d�yor ve bu karakterler pas gec�yor oraya kadar olan k�sm� al�yor bunlar� alm�yor		
		kelimesay++;
	
	}
	
	/*printf("Kelime Say�s�= %d\n",kelimesay);
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
			} // 2 buble sort yapman�n sebebi bir kelime dizisi icin bir say� d�z�ler� �c�n unutma!
			if(degerler[i]==degerler[j]) { // eger uzunluklar� e�itse  alfabetik s�raya gore d�z�ccz
				if(strcmp(kelimeler[i],kelimeler[j])>0){ // alfabetik s�raya gore dizmek �c�n
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

