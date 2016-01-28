#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	int r, value, target, x, y, a, b, c, total, listtotal;
	

	printf("Enter the amount of random numbers to generate: ");
	scanf("%i",&listtotal);
	

	int list[listtotal];


	for (x = 0; x < listtotal; x++){ //assigns random value between 1 and 100 to each number in list
		r = rand();
		value = (r % 100) + 1;
		list[x] = value;
	}

	printf("Enter target: "); //reads target
	scanf("%i",&target);

	for (y = 0; y < listtotal; y++){ //prints out list
		printf ("%i. %i\t",y+1,list[y]);
	}

	for (a = 0; a < listtotal; a++){ //gets matches
		for (b = 0; b < listtotal; b++){
			for(c = 0; c < listtotal; c++){
				if(a != b && a != c && b != c){
					total = list[a] + list[b] + list[c];
					if (total == target){
						printf("\nPositions %i, %i, and %i add up to %i", a + 1, b + 1, c + 1, target); //prints position of matches
					}
				}	
			}
		}
	}



	return 0;
}