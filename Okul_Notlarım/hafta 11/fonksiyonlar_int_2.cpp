#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int buyuk(int x, int y) {
	if (x>y){
		return x;
	} else {
		return y;
	}
	
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int s1,s2;
	scanf("%d",&s1);
	scanf("%d",&s2);
	
	printf ("Buyuk olan say� =%d",buyuk(s1,s2));









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

