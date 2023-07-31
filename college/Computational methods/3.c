#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	
	float f = pow(x, 3) + x - 1;
	return f;
}

void secant(float x1, float x2, float E)
{
	float n = 0, xm, x0, c;
	if (f(x1) * f(x2) < 0) {
		do {
			
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
			c = f(x1) * f(x0);
			x1 = x2;
			x2 = x0;
			n++;
			if (c == 0)
				break;
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
		} while (fabs(xm - x0) >= E); 
								

printf( "Root of the given equation=%lf\n" ,x0 );
		printf( "No. of iterations =%lf \n" , n) ;
	} else
		printf("Can not find a root in the given interval");
}

int main()
{
	
	float x1 = 0, x2 = 1, E = 0.0001;
	secant(x1, x2, E);
	return 0;
}
