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

