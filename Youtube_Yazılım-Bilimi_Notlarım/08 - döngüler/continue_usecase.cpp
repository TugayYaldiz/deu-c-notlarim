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

	int toplam = 0;
	
	int i=0;
	
	int sayi;
	
	// for döngüsünde i++ olur continue desek de
	/*for(i=1; i <= 10; i++) {
		if (i%2==1) {
			continue; // tek sayý ise aþaðýdaki iþlemleri yapmadan döngüde ilerle
		} 
		
		toplam +=i;
		
	} 
	printf("Toplam = %d",toplam);*/
	
	// while döngüsünde i++ yý continue'nýn altlarnda býyerde yazarsak sonsuz dongu olusur donguden cýkamaz
	while(i<=10) {
		if (i%2==1) {
			continue; // tek sayý ise aþaðýdaki iþlemleri yapmadan döngüde ilerle
		} 
		
		toplam +=i;
		i++;
	} // bir cýktý vermez cunku continue nun altýndaký satýrlar okunmadýgý ýcýn continue oldugunda i artmýyacak ve sureklý o degerde kalarak sonsuz dongu olusturucaktýr.

	printf("\nToplam = %d",toplam);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

