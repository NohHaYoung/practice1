#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int sum=0;
	int j;
	
	printf("Input a number : ");
	scanf("%d", &j);
	
	
	for( i=1 ; i<=j; i++){
		sum=sum+i;
	}
	
	printf("The sum is %d.\n", sum);
	
	return 0;
}
