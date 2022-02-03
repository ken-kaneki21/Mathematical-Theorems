#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x
int main()
{

    float a, b,h,k;
    double integration, error, absolute_error, abs_int;
    int i,n;
    cout<<"\nEnter the lower boundary: ";
	cin>>a;
	cout<<"\nEnter the upper boundary: ";
	cin>>b;
	cout<<"\nEnter the n: ";
	cin>>n;
    h=(b-a)/n;
    integration=f(a)+f(b);
    for(i=1; i<= n-1; i++)
    {
    integration = integration+4*f(a+i*h)+2*f(a+(i+1)*h);
    }
    integration = integration * h/3;
    cout<<"\nrequired integral is :"<<integration;
	cout<<"\ntype integration calculated manually";
	cin>>abs_int;
    error=abs(integration-abs_int);
    cout<<"\nerror"<<error;
    absolute_error=error*.01;
    cout<<"\nabsolute error"<<absolute_error;
	return 0;

}
