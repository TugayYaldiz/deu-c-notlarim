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
	setlocale(LC_ALL, "Turkish");
	int kelimesay;
	char str[1000];
	puts("C�mle giriniz...");
	gets(str);
	char * pch;
	printf ("B�l�necek kelime \"%s\"\n",str);
	pch = strtok (str," ,.-"); //  ,.-;:? burda belirlediklerimiz hangi �arta g�re kelimeye ay�racag� �rn: bosluklar� varsa kel�meyapar, : ile birle�enleri kelimeye ay�r�r..., sadece bosluk �stersek bosluk olarak b�rakab�l�r�z
	while (pch != NULL)
	{
	printf ("%s, kelimen�n uzunlu�u=%d\n",pch,strlen(pch));
	pch = strtok (NULL, " ,.-"); // bosluk , . - gordugu yere kadar g�d�yor ve bu karakterler pas gec�yor oraya kadar olan k�sm� al�yor bunlar� alm�yor
	kelimesay++;
	}
	printf("Kelime Say�s�= %d",kelimesay);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

