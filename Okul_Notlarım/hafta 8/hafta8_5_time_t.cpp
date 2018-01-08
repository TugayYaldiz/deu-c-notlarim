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

