#include <stdio.h>
#include <math.h>
float table (float a, float b,float c);
float main(){
	float a,b,c,d;
	printf("\n\t ************* ************* ************* ************* *************\n");
	printf("\t Type in 3 values for a,b and c. Type Enter after each input.\n");
	printf("\t The square root of a+b+c will be calculated and displayed.\n");
	printf("\t Input a:");
	scanf("%f", &a );
	printf("\t Input b:");
	scanf("%f", &b );
	printf("\t Input c:");
	scanf("%f", &c );
	printf("\n\t ************* ************* ************* ************* *************\n");
	table (a,b,c);
		return 0;
}


float table (float a, float b, float c){
	
		int x;
		float y;
		printf("\t x \t | \t y \n");
	
		for (x = -20; x < 21; x++){
			y = a*(x*x) + (b*x) +c;
			printf("\t %d \t | \t %f\n", x,y);
			
		}
		return 0;

}
