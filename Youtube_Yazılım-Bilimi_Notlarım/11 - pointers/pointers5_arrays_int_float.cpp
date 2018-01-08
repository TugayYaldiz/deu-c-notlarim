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
	//setlocale(LC_ALL, "Turkish");


	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; // bu int *p = &sayilar[0] a eþit , direk sayýlar diyerek bu dizinin baslangýc degerýný atýyabýlýrýz pointer'a
	
	/*
	printf("%u\n",p);
	printf("%u\n",(p+1)); // int 4 byte yer tuttugu ýcýn 4 4 artmýs oluyo , p+1 ile arrayýn 2.elemanýna gidebiliriz yani
	printf("%u\n",(p+2)); 
	*/
	
	// pointerýn base aldýgý degýskenýn degerýný aldýk
	printf("%u\n",*p);
	printf("%u\n",*(p+1)); // *(p+1) ---------> p[1]
	printf("%u\n",*(p+2));
	printf("%u\n",*(p+3)); 
	printf("%u\n",*(p+4));
	
	printf("\n");
	
	// pointerýn base aldýgý degýskenýn degerýný aldýk
	printf("%u\n", p[0]);
	printf("%u\n", p[1]); // *(p+1) ---------> p[1]
	printf("%u\n", p[2]);
	printf("%u\n", p[3]); 
	printf("%u\n", p[4]);
	 
	





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

