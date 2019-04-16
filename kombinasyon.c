#include <stdio.h>
#include <conio.h>
int fact(int);
int comb(int, int);
int main() {
	printf("iki sayi giriniz, ilk girilen sayi ikinci girilecek sayidan buyuk olmali\n");
	int x, y;
	scanf("%d%d", &x, &y);
	printf("kombinasyonu: %d", comb(x, y));
	getch();
}
int comb(int x, int y) {
	return fact(x) / (fact(y)*(fact(x - y)));
}
int fact(int x) {
	int sonuc = 1;
	for (int i = 1;i <= x;i++) {
		sonuc *= i;
	}
	return sonuc;
}
