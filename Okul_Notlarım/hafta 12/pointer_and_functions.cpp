#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

void karesi(int *p) {
	
	int gecici = *p;
	
	gecici= gecici*gecici;
	
	*p=gecici;
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	int sayi;
	puts("sayi girin");
	scanf("%d",&sayi);
	
	karesi(&sayi);
	
	puts("karesi");
	
	printf("%d",sayi);
	









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

