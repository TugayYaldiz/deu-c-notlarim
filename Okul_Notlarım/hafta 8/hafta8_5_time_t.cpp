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

	
	time_t zmn;
	struct tm *timedeger; 
	
	
	while(1) {
		system("cls");
		time (&zmn);
		timedeger = localtime(&zmn);
		printf("Saniye: %d ",timedeger->tm_sec);
		for(int i=0;i<timedeger->tm_sec;i++){
			printf("-");
		}
		printf("\n");
		sleep(1);
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

