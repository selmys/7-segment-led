#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#define LEDA 20
#define LEDB 12
#define LEDC 28
#define LEDD 21
#define LEDE 13
#define LEDF 19
#define LEDG 16
#define LEDDP 9

void allOff() {
	digitalWrite(LEDA, LOW);
	digitalWrite(LEDB, LOW);
	digitalWrite(LEDC, LOW);
	digitalWrite(LEDD, LOW);
	digitalWrite(LEDE, LOW);
	digitalWrite(LEDF, LOW);
	digitalWrite(LEDG, LOW);
	digitalWrite(LEDDP, LOW);
}

void initAll() {
	time_t t;
	srand((unsigned) time(&t));
	
	wiringPiSetupGpio ();
	pinMode (LEDA, OUTPUT);
	pinMode (LEDB, OUTPUT);
	pinMode (LEDC, OUTPUT);
	pinMode (LEDD, OUTPUT);
	pinMode (LEDE, OUTPUT);
	pinMode (LEDF, OUTPUT);
	pinMode (LEDG, OUTPUT);
	pinMode (LEDDP, OUTPUT);
}

int main() {
	initAll();
	allOff();
	int number,i,mylist[5],thelist[5];
	for(i=0;i<5;i++) {
		allOff();
		number=rand()%10;
		mylist[i]=number;
		switch (number) {
			case 0: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					digitalWrite(LEDE, HIGH);
					digitalWrite(LEDF, HIGH);
					break;
			case 1: digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					break;
			case 2: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDG, HIGH);
					digitalWrite(LEDE, HIGH);
					digitalWrite(LEDD, HIGH);
					break;
			case 3: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDG, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					break;
			case 4: digitalWrite(LEDF, HIGH);
					digitalWrite(LEDG, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDC, HIGH);
					break;
			case 5: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDF, HIGH);
					digitalWrite(LEDG, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					break;
			case 6: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					digitalWrite(LEDE, HIGH);
					digitalWrite(LEDF, HIGH);
					digitalWrite(LEDG, HIGH);
					break;
			case 7: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDC, HIGH);
					break;
			case 8: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDD, HIGH);
					digitalWrite(LEDE, HIGH);
					digitalWrite(LEDF, HIGH);
					digitalWrite(LEDG, HIGH);
					break;
			case 9: digitalWrite(LEDA, HIGH);
					digitalWrite(LEDB, HIGH);
					digitalWrite(LEDC, HIGH);
					digitalWrite(LEDF, HIGH);
					digitalWrite(LEDG, HIGH);
					break;
		}
	}
	allOff();
	printf("Enter your answer:\n");
	scanf("%d%d%d%d%d",thelist[0],thelist[1],thelist[2],thelist[3],thelist[4]);
	for(i=0;i<5;i++) {
		if(mylist[i] != thelist[i]) {
			printf("Loser!\n");
			exit(0);
		}
	}
	printf("Winner!\n");
	return 0;
}
