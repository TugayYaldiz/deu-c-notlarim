#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

/* 
* a,b,c si verilen denklemin k�kleri
* ax^2 + bx + c �eklindeki denklemin k�kleri
*/
int main() {
	setlocale(LC_ALL, "Turkish");

	int a,b,c;
	
	float x1,x2; //x1 inci k�k ve x2. k�k �c�n tan�mlama
	
	float delta;
	
	printf("Denklemin a's�n� giriniz:");
	scanf("%d",&a);
	
	printf("Denklemin b's�n� giriniz:");
	scanf("%d",&b);
	
	printf("Denklemin c's�n� giriniz:");
	scanf("%d",&c);


	delta = b*b - 4 * a*c;
	
	x1 = (-b + (sqrt(delta))) / 2*a;
	
	x2 = (-b - (sqrt(delta))) / 2*a;
	
	printf("denklemin 1.k�k� %.2f, ikici k�k� %.2f dir", x1,x2);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

