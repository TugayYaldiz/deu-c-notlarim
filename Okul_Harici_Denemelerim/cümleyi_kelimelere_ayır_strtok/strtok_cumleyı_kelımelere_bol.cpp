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
	setlocale(LC_ALL, "Turkish");
	int kelimesay;
	char str[1000];
	puts("Cümle giriniz...");
	gets(str);
	char * pch;
	printf ("Bölünecek kelime \"%s\"\n",str);
	pch = strtok (str," ,.-"); //  ,.-;:? burda belirlediklerimiz hangi þarta göre kelimeye ayýracagý örn: bosluklarý varsa kelýmeyapar, : ile birleþenleri kelimeye ayýrýr..., sadece bosluk ýstersek bosluk olarak býrakabýlýrýz
	while (pch != NULL)
	{
	printf ("%s, kelimenýn uzunluðu=%d\n",pch,strlen(pch));
	pch = strtok (NULL, " ,.-"); // bosluk , . - gordugu yere kadar gýdýyor ve bu karakterler pas gecýyor oraya kadar olan kýsmý alýyor bunlarý almýyor
	kelimesay++;
	}
	printf("Kelime Sayýsý= %d",kelimesay);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

