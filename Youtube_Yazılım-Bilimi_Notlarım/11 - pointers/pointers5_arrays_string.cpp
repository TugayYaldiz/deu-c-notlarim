#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int customStrlen(char *p){
	int uzunluk = 0;
	int i = 0;
	
	for(; p[i] != '\0' ;i++) { // nul karaktere denk gelmeyene kadr dýzýyý dondurducez
		uzunluk++;
	}
	return uzunluk;
}

int main() {
	//setlocale(LC_ALL, "Turkish");


	char yazi[] = "Tura";

	char *p = yazi; //yazý arr ýn baslangýc degerýný atadýk

	printf("%d", customStrlen(yazi));
	
	/*
	printf("%s\n", yazi);
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2); // null karaktere gýdene kadar yapabýlýrz boyle
	*/

	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

