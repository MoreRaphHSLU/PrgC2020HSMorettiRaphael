#include <stdio.h>

typedef enum {
	einfraenkler = 1,
	zweifraenkler = 2,
	fuenfliber = 5
}SwissCoin;

typedef enum {
	nickle = 5,
	dime = 10,
	quarter = 25
}USACoin;

int main( int argc, char* arg[] )
{
	
	SwissCoin chCoin;			//Deklaration
	chCoin = fuenfliber;			//Zuweisung
	USACoin usCoin;			//Deklaration
	usCoin = nickle;			//Zuweisung
	printf("SwissCoin %d, USACoin %d\n", chCoin, usCoin );
	
	
	chCoin = usCoin;
	
	return 0;
}
