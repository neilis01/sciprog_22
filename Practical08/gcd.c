/*
 *Iterative and recursive versions of Euclids algoithm.
*/

#include <stdio.h>
#include <stdlib.h>

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);


int main(){

	int a, b, ierror;

/*	printf("Please Input two integers:\n");
	ierror = scanf("%d %d", &a, &b);
	if(ierror != 2){
		printf("Please enter two integers! \n");
		return 1;
	}

	if(a<=0 || b<= 0){
		printf("These numbers are not positive! \n");
		return 1;
	}	
*/
	
	// Generate two positive integers between 1 and 12
	
	srand(time(NULL));
	a = (rand()%12)+1;
	b = (rand()%12)+1;
	int x = (rand()/RAND_MAX);

	// Call the functions
	
	printf("IterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a,b));
	printf("RecursiveGCD(%d,%d) = %d\n", a, b, recursiveGCD(a,b));



	return 0;
}





int iterativeGCD(int a, int b){
	
	int temp;

	while(b != 0){

		temp = b;

		b = a % b;

		a = temp;
	}

	return a;
}


int recursiveGCD(int a, int b){
	if (b == 0){
		return a;
	}

	else{
		recursiveGCD(b, a%b);
	}
}

