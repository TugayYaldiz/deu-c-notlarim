#include<stdio.h>

int main ()
{
	float deger = 11.25555555;	
	printf("hello world \n-------------------------------------"); /* ekrana bas \n sat�r� bitir  */
	printf("\n\thello world2\n"); /* \t tab at�yor */ 
	printf("\nAD:Tugay\tSOYAD:YALDIZ");
	printf("\n\ahello world2"); /* \t tab at�yor */ /* \a bildirim sesi veriyor program cal�st�g�nda */
	printf("\nTugay\t%s","YALDIZ"); /* %s ikinci parametreyi temsil ediyor*/
	printf("\nTugay\t%s\t%s","YALDIZ","hi"); /* %s ikinci parametreyi temsil ediyor, %s leri zincirledikce s�ras�yla strng parametreleri al�rlar*/
	printf("\nTugay\t%s\t%d","YALDIZ", 22); /* %d integer degerler icin */
	printf("\nTugay\t%s\t%.2f","YALDIZ", deger); /* %f float degerler icin, %.2f dedigimizde float degeri , den sorra 2 basamag�n� goster�yor */
	printf("\nTugay\t%s\t%c","YALDIZ", 'a' ); /* %c char olarak kabul eder yani a c�kt�s�n� gosterir*/
	printf("\nTugay\t%s\t%d","YALDIZ", 'a' ); /* %d string olarak kullan�rsak bunun asc�� degerini verir */
	printf("\n-------------------------");
	printf("\nSaat:\t%02d:%02d",1,25); /* %02d olarak kullandg�m�zda bunu �k� hanel� bekle eger tek hanel� gel�rse bas�na 0 koy ded�k*/ 
	return 0;	
}
