#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");

	char name[14]= "Tugay Yald�z";
	printf("�smim %s\n",name);
	
	name[2] = 'x';
	printf("�smim %s\n",name);
	
	char food[] = "K�fte";
	printf("En g�zel yemek %s\n",food);
	
	strcpy(food,"Mercimek"); // array� deg�st�rd�k , strcpy(hangiArrDe�i�cek, yeniDe�er)
	printf("En g�zel yemek %s\n",food);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

