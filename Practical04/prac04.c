#include <stdio.h>
#include <math.h>

float deg_to_rad(float theta){

	return (M_PI * theta) / 180;

}

float trap_rule(float a, float b, int N, float function_array[N+1]){

	float sum = function_array[0] + function_array[N];

	int i = 0;

	for(i; i < N; i++){
	
		sum += 2*function_array[i] ;

	}

	return ((b-a)*(sum))/ (2*N);

}


int main (void){

	float start = 0.0;
	float end = 60;
	int N = 100000;
	float stepsize = (end - start)/ N;

	float tan_arr[N+1];
	
	int i = 0;

	for(i; i <= N; i++){

		tan_arr[i] = tan(deg_to_rad(stepsize*i));		

	}


	float ans = trap_rule(deg_to_rad(start), deg_to_rad(end), N, tan_arr);
	
	printf("The answer is %f\n", ans);

	printf("The actual answer is %f\n", logf(2.0));

	return 0;

}
