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
	
	// x+1 = y; gibi bi�ey yapamazy�z c de sol taraf saf halde olucak x ya da y gibi
	
	int x=1;
	int y=2;
	printf("x = %d\n",x);
	printf("x++ = %d \n",x++);
	printf("++x = %d\n",++x);
	printf("x++ = %d\n",x++);
	printf("x++ = %d\n",x+=2);
	printf("x=6, y=2 x%c=y => %d\n",37,x%=y);
	printf("current x= %d\n",x);
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

