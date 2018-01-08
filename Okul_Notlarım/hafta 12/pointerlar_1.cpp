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
/*
	int a=33;
	char b='B';
	
	// içerik degerleri
	printf("a nin degeri %d",a);
	printf("\nbnin degeri %c",b);
	// içerik degerleri
	
	// adres degerleri
	printf("\na nin adres degeri %x",&a);
	printf("\nbnin  adres degeri %x",&b);
	// adres degerleri
	
	// &b="22FFE36"; bu sekýlde býr atama yapýlmaz , eþittirin solunda & hedef gostericisini kullanamayýz, derleyici blocklar
*/
	int sayi=5;
	int *p;
	
	p = &sayi;

	printf("\nsayi'nin degeri %d",sayi);
	printf("\nsayi'nin adres degeri %x",&sayi);
	
	printf("\n\np'nin gösterici degeri %d",*p);
	printf("\np'nin adres degeri %d",&p);
	printf("\np'nin  degeri %x",p);
	
	*p = 21;
	printf("\n\nsayi'nin yeni degeri %d",sayi);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

