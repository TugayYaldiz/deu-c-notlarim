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
	setlocale(LC_ALL, "Turkish");

	int en=303, boy = 87;
	
	int kareAl= 6*7;
	
	int sinifAlan = en * boy;
	
	int say;
	
	while(kareAl<=sinifAlan) {
		sinifAlan -= kareAl;
		say++;
	}
	
	
	printf("%d kare sýðar",say);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

