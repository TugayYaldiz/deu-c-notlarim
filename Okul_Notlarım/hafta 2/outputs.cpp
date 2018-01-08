#include<stdio.h>

int main ()
{
	float deger = 11.25555555;	
	printf("hello world \n-------------------------------------"); /* ekrana bas \n satýrý bitir  */
	printf("\n\thello world2\n"); /* \t tab atýyor */ 
	printf("\nAD:Tugay\tSOYAD:YALDIZ");
	printf("\n\ahello world2"); /* \t tab atýyor */ /* \a bildirim sesi veriyor program calýstýgýnda */
	printf("\nTugay\t%s","YALDIZ"); /* %s ikinci parametreyi temsil ediyor*/
	printf("\nTugay\t%s\t%s","YALDIZ","hi"); /* %s ikinci parametreyi temsil ediyor, %s leri zincirledikce sýrasýyla strng parametreleri alýrlar*/
	printf("\nTugay\t%s\t%d","YALDIZ", 22); /* %d integer degerler icin */
	printf("\nTugay\t%s\t%.2f","YALDIZ", deger); /* %f float degerler icin, %.2f dedigimizde float degeri , den sorra 2 basamagýný gosterýyor */
	printf("\nTugay\t%s\t%c","YALDIZ", 'a' ); /* %c char olarak kabul eder yani a cýktýsýný gosterir*/
	printf("\nTugay\t%s\t%d","YALDIZ", 'a' ); /* %d string olarak kullanýrsak bunun ascýý degerini verir */
	printf("\n-------------------------");
	printf("\nSaat:\t%02d:%02d",1,25); /* %02d olarak kullandgýmýzda bunu ýký hanelý bekle eger tek hanelý gelýrse basýna 0 koy dedýk*/ 
	return 0;	
}
