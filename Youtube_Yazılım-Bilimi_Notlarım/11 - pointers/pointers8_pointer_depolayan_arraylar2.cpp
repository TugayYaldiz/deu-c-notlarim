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
	
	char gun[] = "pazartesi";
	
	char *gunler[7] = {gun, "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"}; 
	// kendýmýz býseyler yazmak yerýne bi degiskeni yazýp onun degerýný de tutabiliriz
	printf("%s", gunler[0]);







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

