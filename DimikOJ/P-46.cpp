#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, s,t, area;

  //printf("Enter sides of a triangle\n");
  
  
  scanf("%lf",&t);
  
  while(t--){
  scanf("%lf%lf%lf", &a, &b, &c);
	
	
	
  s = (a+b+c)/2; // Semiperimeter

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area = %.3lf\n", area);
}
  return 0;
}
