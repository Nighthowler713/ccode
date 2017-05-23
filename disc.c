#include <stdio.h>
#include <math.h>
float discriminant(float a, float b, float c);

float main()
    {
        float a,b,c,d;
        
        printf("Type three numbers a, b and c \n");
        printf("Type each value follow by an Enter key");
        
        printf("Input a :");
        scanf("%f" , &a);
        
        printf("Input b :");
        scanf("%f" , &b);
        
        printf("Input c :");
        scanf("%f" , &c);
        
        d = discriminant(a,b,c);
        printf("\n The discriminant %f\n" ,d);
        
    }
    
 float discriminant (float a, float b, float c){
	      float d = b*b - 4 * a *c;
	      return d;
	      
	}
