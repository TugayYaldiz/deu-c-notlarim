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

	char isim[100];
	int uz,bosluksay=0,yer=0;
	gets(isim);
	uz=strlen(isim);
	
	for(int i=uz;i>-1;i-=1) {
		for(int x=0;x<bosluksay;x++){
			printf(" ");
		}
		for(int j=yer;j<i;j++) {
			printf("%c",isim[j]);
		}
		if(i>uz/2 ) printf("\n");
		yer++;
		bosluksay++;
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

