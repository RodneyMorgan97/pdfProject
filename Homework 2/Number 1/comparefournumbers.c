//assumes all four numbers are different, and all numbers are integers
#include <stdio.h>
int main(void){
	int a, b, c, d, temp;
	printf("Enter the first digit: ");
	scanf("%i",&a);
	printf("Enter the second digit: ");
	scanf("%i",&b);
	printf("Enter the third digit: ");
	scanf("%i",&c);
	printf("Enter the fourth digit: ");
	scanf("%i",&d);

	if (b < a && b < c && b < d){
		temp = a;
		a = b;
		b = temp;
	}

	if (c < a && c < b && c < d){
		temp = a;
		a = c;
		c = temp;
	}

	if (d < a && d < b && d < c){
		temp = a;
		a = d;
		d = temp;
	}

	if (c < d && c < b){
		temp = b;
		b = c;
		c = temp;
	}

	if (d < c && d < b){
		temp = b;
		b = d;
		d = temp;
	}
	if (d < c){
		temp = c;
		c =d;
		d = temp;
	}
	
	

	printf("%i",a);
	printf("\n");
	printf("%i",b);
	printf("\n");
	printf("%i",c);
	printf("\n");
	printf("%i",d);
	return 0;
}