#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c;
a=1000;
b=0.0001;
c=(pow(a-b,2)-(pow(a,2)-2*a*b))/pow(b,2);
printf("calculation\n%f",c);
scanf("%lf%lf",&a,&b);
}
