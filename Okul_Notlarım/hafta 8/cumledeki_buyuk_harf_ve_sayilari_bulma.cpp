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

