#include <stdio.h>
#include <math.h>
void main()
{
    float x,y;
    printf("Please input x:");
    scanf("%f",&x);
    if(x>=100||x<=36) printf("error!\n");
    else
     {
		switch ((int)sqrt(x))
		{
		case 10:break;
		case 9:y = x + 2; break;
		case 8:y = 2 * x + 3; break;
		case 7:y = 3 * x + 4; break;
		case 6:y = 4 * x + 3;
		}
		printf("y=%.2f\n", y);
	}
}