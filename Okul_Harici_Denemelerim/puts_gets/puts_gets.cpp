#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");

	char catsName[50];
	char catsFood[25];
	char sentence[75] = "";
	
	puts("Whats the cat dumb name?"); // puts otomatik olarak \n ekler stringin sonuna
	gets(catsName); //scanf ile deger aldýpýmýzda boþlukda sorun olusuyordu boslukdan sonrasýný almýyordu gets ile kullanýcý ne gýrdýyse alýyoruz.
	
	puts("Whats does it eat?"); 
	gets(catsFood);
	
	// strcat ile düzenleme yaptýk sentence de 
	
	strcat(sentence,catsName);
	strcat(sentence, " loves to eat ");
	strcat(sentence,catsFood);
	
	puts(sentence);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

