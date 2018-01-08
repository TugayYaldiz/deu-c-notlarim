#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int x1 = 1;
	int x2 = -1;
	
	printf("|%d|+|%d|=%d\n", x1, x2, (x1+x2));
	printf("|%d|-|%d|=%d\n", x1, x2, (x1-x2));
	printf("|%d|*|%d|=%d\n", x1, x2, (x1*x2));
	printf("|%d|/|%d|=%d\n", x1, x2, (x1/x2));
	printf("|%d|%c|%d|=%d\n", x1, 37, x2, (x1%x2));
	
	// iþlem sýralarý matematikle ayný parantez icleri herzaman once yapýlýr *,/,%  -> + ve - ye göre daha önce iþlem görür, tekil olan oparetörler önce yapýlýr örn: 2*-3 iþleminin sonucu -6 olur 

	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

