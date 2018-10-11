#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int j;
	
	printf("Input the month : ");
	scanf("%d", &i);
	
	j = i%2;
	
	if ((j==1 && i<8) || (j==0 && i>7) ) {
		printf("The day is 31.");
	}
	else if (i==2) {
		printf("The day is 28.");
	}
	else {
		printf("The day is 30.");
	}
	return 0;
}
