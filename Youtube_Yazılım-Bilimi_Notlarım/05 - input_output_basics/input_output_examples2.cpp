#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

/* 
* a,b,c si verilen denklemin kökleri
* ax^2 + bx + c þeklindeki denklemin kökleri
*/
int main() {
	setlocale(LC_ALL, "Turkish");

	int a,b,c;
	
	float x1,x2; //x1 inci kök ve x2. kök ýcýn tanýmlama
	
	float delta;
	
	printf("Denklemin a'sýný giriniz:");
	scanf("%d",&a);
	
	printf("Denklemin b'sýný giriniz:");
	scanf("%d",&b);
	
	printf("Denklemin c'sýný giriniz:");
	scanf("%d",&c);


	delta = b*b - 4 * a*c;
	
	x1 = (-b + (sqrt(delta))) / 2*a;
	
	x2 = (-b - (sqrt(delta))) / 2*a;
	
	printf("denklemin 1.kökü %.2f, ikici kökü %.2f dir", x1,x2);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

