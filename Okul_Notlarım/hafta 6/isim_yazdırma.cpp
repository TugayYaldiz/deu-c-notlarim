#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h> //gets i�in falan
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	//setlocale(LC_ALL, "Turkish");


	char isim[50];
	gets(isim);
	int i,j,uz;
	
	uz=strlen(isim);
	for(i=0;i<uz;i++){
		for(j=0;j<=i;j++){
			printf("%c",isim[j]);
		}
		printf("\n");
	}
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

