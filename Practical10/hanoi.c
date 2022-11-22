#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int source, int destination, int inter){

	//base cases
	
	if (n==1){
		printf("Move disc from %d to %d\n", source, destination);
	}
	else{
		hanoi(n-1, source, inter, destination);
		printf("Move Disc from %d to %d\n", source, destination);
		hanoi(n-1, inter, destination, source);
	}
}



int main(void){

	int h = 2;

	printf("Solution for %d dics\n", h);
	
	hanoi(h,1,3,2);

	return 0;


}