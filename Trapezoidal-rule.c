double f(double x){
  return x*x;
}

main()
{
  int n,i,a,b;
  double h,x,s=0,integral,act,er,erp,era;

  printf("sub-intervals: ");
  scanf("%d",&n);
  printf("\nLower limit: ");
  scanf("%d",&a);
  printf("\nUpper limit: ");
  scanf("%d",&b);

  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    s=s+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*s);

  printf("\nThe integral is: %lf\n",integral);
  printf("Value from actual integration: ");
  scanf("%lf", &act);
  er = act - integral;
  era = fabs(er);
  erp = (era/act)*100;
  printf("Error: %lf\n", era);
  printf("Relative Error: %lf\n", erp);
  return 0;
}
