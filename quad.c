#include <stdio.h>
#include <math.h>
float discriminant (float a, float b, float c);

float main()
	{
		float a,b,c,d,x1,x2;
		float a1,b1,a2,b2;
		
		printf("Type three numbers a, b, and c");
		printf("Type each value follow by an Enter key");
		
		printf("Input a :");
		scanf("%f", &a);
		
		printf("Input b :");
		scanf("%f", &b);
		
		printf("Input c :");
		scanf("%f", &c);
		
		d = discriminant(a,b,c);
		printf(" The discriminant %f",d);
		if( d < 0){
			printf("Imaginary Roots");
			d = d * -1;
			a1 = (-1 * b)/ (2 * a);
			b1 = sqrt(d) / (2*a);
			
			a2 = (-1 * b)/ (2 * a);
			b2 = -1 * sqrt(d) / (2*a);
			
			printf("Imaginary Root %f + %f + i",a1,b1);
			printf("Imaginary Root %f + %f + i",a2,b2);
		}else{
			printf("Real Roots");
			x1 = (-1*b + sqrt(d))/(2*a);
			x2 = (-1*b - sqrt(d))/(2*a);
			printf("Roots %f and %f",x1,x2);
		}
			
	}
float discriminant (float a, float b, float c){
		float d = b*b - 4 * a * c;
		return d;
	}
