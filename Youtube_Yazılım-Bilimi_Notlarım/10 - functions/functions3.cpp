#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


int faktoryel(int sayi) {
	int fact =1;
	
	for(;sayi>0;sayi--) {
		fact *=sayi;
	}
	
	return fact;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int n;
	printf("Faktöriyelini istediðniz sayý:");
	scanf("%d",&n);
	
	printf("%d!=%d",n,faktoryel(n));









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

