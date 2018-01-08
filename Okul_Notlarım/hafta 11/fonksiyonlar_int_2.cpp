#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

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
	
	printf ("Buyuk olan sayý =%d",buyuk(s1,s2));









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

