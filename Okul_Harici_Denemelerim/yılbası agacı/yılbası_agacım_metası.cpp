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
	puts("cumle girin:");
	gets(cumle);
	int order=strlen(cumle);
	for(int i=0;i<strlen(cumle);i++) {		
		for(int j=0;j<order;j++)
			printf(" ");
		
		for(int t=0;t<=i;t++)
			printf("%c ",cumle[t]);	
		printf("\n");
		order--;
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

