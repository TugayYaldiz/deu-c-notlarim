#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


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
	printf("Fakt�riyelini istedi�niz say�:");
	scanf("%d",&n);
	
	printf("%d!=%d",n,faktoryel(n));









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

