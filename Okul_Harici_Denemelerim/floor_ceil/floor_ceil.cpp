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

	float bacon1 = 9.65234;
	float bacon2 = 3.3;
	
	// floor a�a�� yuvarlar say�y�
	printf("bacon1 is %.2f \n", floor(bacon1) );
	printf("bacon2 is %.2f \n", floor(bacon2) );
	//ceil yukar� yuvarlar say�y�
	printf("bacon1 is %.2f \n", ceil(bacon1) );
	printf("bacon2 is %.2f \n", ceil(bacon2) );







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

