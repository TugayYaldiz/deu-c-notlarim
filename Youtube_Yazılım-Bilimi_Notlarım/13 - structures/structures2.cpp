#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

struct Araba {
	int tekerlekSayisi;
	int vitesSayisi;
	int model;
	float motor;
	int beygir;
	
}araba1,araba2; 
// buraya araba1, araba2  gibi seyler yazarak c ye bunlar� ilerde olu�turucaz d�yoruz

int main() {
	//setlocale(LC_ALL, "Turkish");

	//araba1 = {0}; // i�indeki b�t�n degerleri 0 dan baslat, char isim diye bi degisken olsayd� struct �n �c�nde bunuda bos arr olarak baslat�cakd�

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

