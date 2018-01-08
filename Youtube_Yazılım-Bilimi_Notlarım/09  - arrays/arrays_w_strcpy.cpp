#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");

	char name[14]= "Tugay Yaldýz";
	printf("Ýsmim %s\n",name);
	
	name[2] = 'x';
	printf("Ýsmim %s\n",name);
	
	char food[] = "Köfte";
	printf("En güzel yemek %s\n",food);
	
	strcpy(food,"Mercimek"); // arrayý degýstýrdýk , strcpy(hangiArrDeðiþcek, yeniDeðer)
	printf("En güzel yemek %s\n",food);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

