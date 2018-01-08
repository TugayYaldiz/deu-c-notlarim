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
	int uz,i=0,val;
	
	puts("Cumle girin:");
	
	gets(cumle);
	
	uz=strlen(cumle);
	
	srand(time(NULL));
	
	int r=rand();
    i = (r % uz) + 1;
    
	for(;i<uz;i++){
		printf("%c",cumle[i]);
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

