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

	
	/* 
	* & deðiþkenin adres bilgisini veriyor
	* * adresteki deðeri veriyor
	*/
	
	int i=5;
	
	int *p = &i; //int pointer a i nin adresini gösterdik
	
	printf("%u\n",p); //pointerin adres bilgisini almanýn baska býr yolu %u
	printf("%p\n",p); // pointer ýn fiziksel adresi %p ile bastýk
	printf("%d", *p); // *ile pointer ýn tuttugu adrese gittik ve  o adresteki deðeri aldýk
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

