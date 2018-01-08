#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

struct Araba {
	int tekerlekSayisi;
	int vitesSayisi;
	int model;
	float motor;
	int beygir;
	
}araba1,araba2; 
// buraya araba1, araba2  gibi seyler yazarak c ye bunlarý ilerde oluþturucaz dýyoruz

int main() {
	//setlocale(LC_ALL, "Turkish");

	//araba1 = {0}; // içindeki bütün degerleri 0 dan baslat, char isim diye bi degisken olsaydý struct ýn ýcýnde bunuda bos arr olarak baslatýcakdý

	araba1 = {
		4,
		6,
		2017,
		3.0,
		300
	};
	
	araba2 = araba1;
	
	printf("%d %d %d %.2f %d\n", araba1.tekerlekSayisi, araba1.vitesSayisi, araba1.model, araba1.motor, araba1.beygir );
	printf("%d %d %d %.2f %d\n", araba2.tekerlekSayisi, araba2.vitesSayisi, araba2.model, araba2.motor, araba2.beygir );






	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

