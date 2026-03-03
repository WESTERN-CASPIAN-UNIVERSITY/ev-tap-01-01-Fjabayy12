/*Tapşırıq 1: Şəxsi məlumatlar
Aşağıdakı məlumatları ekrana çıxaran proqram yazın:

•	Adınız
•	Soyadınız
•	Yaşınız
•	Universitetiniz
•	İxtisasınız
Gözlənilən çıxış:
Ad: Əli
Soyad: Məmmədov
Yaş: 20
Universitet: Bakı Dövlət Universiteti
İxtisas: Kompüter Elmləri*/
include <stdio.h>
int main() {
	char ad[20], soyad[20], universitet[50], ixtisas[50];
	int yas;
	printf("adinizi daxil edin:");
	scanf("%s", ad);
	printf("soyadinizi daxil edin:");
	scanf("%s", soyad);
	printf("yasinizi daxil edin:");
	scanf("%d", &yas);
	printf("universitetinizi daxil edin:");
	scanf("%s", universitet);
	printf("ixtisasinizi daxil edin:");
	scanf("%s", ixtisas);
}


