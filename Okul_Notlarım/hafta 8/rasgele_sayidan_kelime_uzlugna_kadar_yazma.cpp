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

