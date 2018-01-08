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

