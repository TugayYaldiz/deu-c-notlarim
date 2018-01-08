#include <stdlib.h>
#include<stdio.h>
#include<math.h> // floor ve ceil için lazým floor yukarý yuvarlar ceil aþaðý
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Turkish");
	float x,y;
	printf("aralarýnda bosluk olack sekýld iki sayý gýrýnýz: ");
	scanf("%f%f",&x, &y); // girerken sayýyý , le gir . ile degil
	printf("\n%f %f ", x,y);
	printf("\nGirdiginiz sayýlar toplamý: %.2f",(x+y));
	printf("\nGirdiginiz sayýlar farký: %.2f",(x-y));
	printf("\nGirdiginiz sayýlar bölümü: %.2f",(x/y));
	printf("\nGirdiginiz sayýlar carpýmý: %.2f",(x*y));
	printf("\nGirdiginiz sayýlar modu: %d", (int)(floor(x)) % (int)(floor(y))); // floor ile aþagý yuvarladýk bu býze double sonuc verýr bunuda ýnte cevýrdýk ki % kullanabýlelým

	system("pause");
	return 0;
	
}
