#include <stdio.h>
int main(void){
	int x;
	double y;
	printf("Celsius || Fahrenheit\n-----------------------------------------\n");
	for (x = -20; x < 46; x+=3){
		y = 5.0/9.0 *(x - 32);
		printf("%8.2f" , y); 
		printf("|| ");
		printf("%i" , x); 
		printf("\n");
	}
	return 0;
}