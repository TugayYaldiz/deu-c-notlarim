#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int x1 = 1;
	int x2 = -1;
	
	printf("|%d|+|%d|=%d\n", x1, x2, (x1+x2));
	printf("|%d|-|%d|=%d\n", x1, x2, (x1-x2));
	printf("|%d|*|%d|=%d\n", x1, x2, (x1*x2));
	printf("|%d|/|%d|=%d\n", x1, x2, (x1/x2));
	printf("|%d|%c|%d|=%d\n", x1, 37, x2, (x1%x2));
	
	// i�lem s�ralar� matematikle ayn� parantez icleri herzaman once yap�l�r *,/,%  -> + ve - ye g�re daha �nce i�lem g�r�r, tekil olan oparet�rler �nce yap�l�r �rn: 2*-3 i�leminin sonucu -6 olur 

	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

