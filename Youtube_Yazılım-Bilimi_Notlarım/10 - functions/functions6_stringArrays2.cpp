#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

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
	//setlocale(LC_ALL, "Turkish"); // bunu kaldýrýnca getsdeki türkce cchar alma hatasý duzelýyor

	char isim[200];
	puts("Isminzi girin");
	gets(isim);
	terscevir(isim);
	







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

