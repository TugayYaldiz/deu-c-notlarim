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

	int n, fact=1;
	
	printf("Faktöriyelini istediðiniz sayýyý girin:");
	scanf("%d",&n);
	printf("%d! = ",n);
	
	while(n != 0) {
		if(n==1) {
			printf("%d=",n);
		} else {
			printf("%d*",n);
		}
		fact*=n;
		n--;		
	}
	printf("%d", fact);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

