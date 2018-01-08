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
	
	int x = 3;
	float y = 0.1;
	printf("%f\n",x/y);
	
	printf("%f\n",2*4.2 + 4%2);
	printf("%f\n",12.5/2);
	printf("%d\n",(int)3.2); // (int) ile float bi degeri  int yapýp %d ile bastk
	printf("%f\n",(float)3); // (float) ile int bi degeri float yapýp %f ile bastýk











	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

