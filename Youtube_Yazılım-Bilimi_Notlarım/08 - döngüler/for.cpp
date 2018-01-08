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

	int i,j;
	/*
	for(i=0,j=1; i < 10 || j < 5; i++, j++) {
		printf("i:%d - j:%d\n",i,j);
	} 
	*/


	for (i=0; i < 3; i++) {
		for(j=0; j < 3; j++) {
			printf("i:%d - j:%d\n",i,j);
		}
	}





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

