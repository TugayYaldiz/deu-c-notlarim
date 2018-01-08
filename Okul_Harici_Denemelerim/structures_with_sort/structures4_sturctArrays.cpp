#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
};

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenciler[3]; // ogrenciler içinde Ogrenci yapýsýnda olan 3 nesnemýz var

	int i;
	
	for (i=0; i < 3; i++) {
		
		printf("%d. oðrencinin bilgilerini girin\t",i+1);
		puts("Örn: isim boþluk soyisim boþluk numarasý");
		scanf("%s %s %d", &ogrenciler[i].isim, &ogrenciler[i].soyisim, &ogrenciler[i].numara);	
		
	}
	
	for (int i=0; i < 3; i++) { // struct buble sort
		
		for(int j=1; j < 3 - i ;j++) {
			
			if (ogrenciler[j-1].numara > ogrenciler[j].numara) {
				struct Ogrenci temp = ogrenciler[j]; // geçici yapý olusturduk
				ogrenciler[j] = ogrenciler[j-1];
				ogrenciler[j-1] = temp;
			}
			
		}
	}
	puts("Numara sýrasýna göre sýralanmýs yeni öðrenci listesi");
	for (i=0; i < 3; i++) {
		
		printf("%d. öðrenci bilgileri = %s %s %d\n", i+1, ogrenciler[i].isim, ogrenciler[i].soyisim, ogrenciler[i].numara);	
		
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

