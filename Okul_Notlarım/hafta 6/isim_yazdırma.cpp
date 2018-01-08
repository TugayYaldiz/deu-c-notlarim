#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h> //gets için falan
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

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

