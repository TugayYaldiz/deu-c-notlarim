#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int uzunlukDon(char name[]) { // string dizillernde uzunluk degerler�n� ta��yo c ekstra olarak gondermem�ze gerek yok
	
	int uzunluk;
	// alttaki olay�n alternetif yolu: uzunluk= strlen(name);
	
	int i;
	
	for(i=0; name[i] !='\0';i++) { // arrayde sona ulas�lmad�g� surece, c otommat�k \0 koyuyo  her char arr �n soununa b�tt�g�n� anlamak �c�n 
		uzunluk++;
	}	
	return uzunluk;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	char isim[] = "Tugay";
	
	printf("%d",uzunlukDon(isim));








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

