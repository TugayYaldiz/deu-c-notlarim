#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

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

