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

	float bacon1 = 9.65234;
	float bacon2 = 3.3;
	
	// floor aþaðý yuvarlar sayýyý
	printf("bacon1 is %.2f \n", floor(bacon1) );
	printf("bacon2 is %.2f \n", floor(bacon2) );
	//ceil yukarý yuvarlar sayýyý
	printf("bacon1 is %.2f \n", ceil(bacon1) );
	printf("bacon2 is %.2f \n", ceil(bacon2) );







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

