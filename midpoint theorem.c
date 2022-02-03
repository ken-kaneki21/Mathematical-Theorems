#include<stdio.h>
#include<math.h>
double f(double x)
{
    double i = pow(x,2);
    return i;
} 

int main()
{
    double n,a,b,h,xm,e,s,nu;
    printf("Enter the lower boundary: \n");
	scanf("%f",&a);
	printf("Enter the upper boundary: \n");
	scanf("%f",&b);
	printf("Enter value of n(no. of sub-intervals): \n");
	scanf("%f",&n);
    h=(b-a)/n;
    xm=a+h/2;
	do
	{
	    printf("");
	    s=s+(f(xm)*h);
        xm=xm+h;
	} 
	while(xm<b); 
    printf("Value of integration by mid-point rule:\n %.6f\n",s);
    printf("Exact result from manual integration:\n");
    scanf("%.6f",nu);
    e=nu-s;
    printf("ERROR occurred:\n%f",e);
    return 0;
}