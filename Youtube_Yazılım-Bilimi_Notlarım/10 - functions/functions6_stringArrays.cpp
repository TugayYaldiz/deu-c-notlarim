#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int uzunlukDon(char name[]) { // string dizillernde uzunluk degerlerýný taþýyo c ekstra olarak gondermemýze gerek yok
	
	int uzunluk;
	// alttaki olayýn alternetif yolu: uzunluk= strlen(name);
	
	int i;
	
	for(i=0; name[i] !='\0';i++) { // arrayde sona ulasýlmadýgý surece, c otommatýk \0 koyuyo  her char arr ýn soununa býttýgýný anlamak ýcýn 
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

