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

	char cumle[1000];
	int uz, toplam;
	puts("cumle girin");
	gets(cumle);	
	for(int i=0; cumle[i]!='\0';i++) {
		if( isdigit( cumle[i] ) ){
			/*printf("%d\n",cumle[i]-48); /* atoi dir (int) dir (char) d�r cal�smad�*/ 
			toplam += cumle[i]-  48;
		}
	}
	// printf("%d",toplam);
	for(int j=0;j<toplam;j++){
		printf("*");
	}
	
	









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

