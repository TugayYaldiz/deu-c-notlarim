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

	int deger = 'a';
	//int deger = '9';
	//int deger = '$';
	
	if( isalpha(deger) ){
		printf("%c alfabetik bir deðer",deger);
	}else if( isdigit(deger) ) {
		printf("%c numeric bir deðer",deger);
	}else {
		printf("%c wtf was that",deger);
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

