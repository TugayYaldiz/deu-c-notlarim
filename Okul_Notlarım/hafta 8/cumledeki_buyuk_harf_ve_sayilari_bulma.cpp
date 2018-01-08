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
	//setlocale(LC_ALL, "Turkish");

	char cumle[100];
	int buyukharf=0,sayi=0,uz,i=0;
	puts("Cumle girin:");
	gets(cumle);
	uz=strlen(cumle);
	
	for(;i<uz;i++){
		if(isupper(cumle[i])) {
			buyukharf++;
		}
		if(isdigit(cumle[i])) {
			sayi++;
		}
	}
	printf("Cumledeki buyukharf sayisi=%d\n",buyukharf);
	printf("Cumledeki sayi sayisi=%d\n",sayi);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

