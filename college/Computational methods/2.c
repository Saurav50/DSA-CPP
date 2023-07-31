#include<stdio.h>
#include<conio.h>

double func(double x)
{
	return x*x - 6*x - 20;

}
void bisection(double a, double b , double e)
{
	if (func(a) * func(b) >=0)
	{
		printf( "Intial guesses are wrong\n");
		return;
	}

	double c = a;
	while ((b-a) >=e)
	{
		c = (a+b)/2;
		if (func(c) == 0.0)
			break;
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	printf("The value of root is : %lf" ,c);
}

int main()
{
	
	double a,b,e;
    printf("Enter initial guesses:");
    scanf("%lf %lf",&a,&b);
    printf("Enter tolerable error:");
    scanf("%lf",&e);
	bisection(a, b, e);
	return 0;
}
