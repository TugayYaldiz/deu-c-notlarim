#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

void terscevir(char dizi[]) {
	
	int i,uzunluk,gecici;
	
	uzunluk = strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++){
		
		gecici = dizi[i];
		
		dizi[i] = dizi[uzunluk-1-i];
		
		dizi[uzunluk-1-i] = gecici;
		
	}
	
	puts(dizi);
	
	
}

int main() {
	//setlocale(LC_ALL, "Turkish"); // bunu kald�r�nca getsdeki t�rkce cchar alma hatas� duzel�yor

	char isim[200];
	puts("Isminzi girin");
	gets(isim);
	terscevir(isim);
	







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

