#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");
/*
	int a=33;
	char b='B';
	
	// i�erik degerleri
	printf("a nin degeri %d",a);
	printf("\nbnin degeri %c",b);
	// i�erik degerleri
	
	// adres degerleri
	printf("\na nin adres degeri %x",&a);
	printf("\nbnin  adres degeri %x",&b);
	// adres degerleri
	
	// &b="22FFE36"; bu sek�lde b�r atama yap�lmaz , e�ittirin solunda & hedef gostericisini kullanamay�z, derleyici blocklar
*/
	int sayi=5;
	int *p;
	
	p = &sayi;

	printf("\nsayi'nin degeri %d",sayi);
	printf("\nsayi'nin adres degeri %x",&sayi);
	
	printf("\n\np'nin g�sterici degeri %d",*p);
	printf("\np'nin adres degeri %d",&p);
	printf("\np'nin  degeri %x",p);
	
	*p = 21;
	printf("\n\nsayi'nin yeni degeri %d",sayi);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

