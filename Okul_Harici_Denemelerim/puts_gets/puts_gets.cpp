#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");

	char catsName[50];
	char catsFood[25];
	char sentence[75] = "";
	
	puts("Whats the cat dumb name?"); // puts otomatik olarak \n ekler stringin sonuna
	gets(catsName); //scanf ile deger ald�p�m�zda bo�lukda sorun olusuyordu boslukdan sonras�n� alm�yordu gets ile kullan�c� ne g�rd�yse al�yoruz.
	
	puts("Whats does it eat?"); 
	gets(catsFood);
	
	// strcat ile d�zenleme yapt�k sentence de 
	
	strcat(sentence,catsName);
	strcat(sentence, " loves to eat ");
	strcat(sentence,catsFood);
	
	puts(sentence);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

