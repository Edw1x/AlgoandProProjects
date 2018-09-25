#include<stdio.h>
#include<math.h>
long int f(int m)
{
    return (m < 2)?1:m*f(m-1);
}
int main(void)
{
    double a = 1;
    double n = 1;
    
    while(a > 0.0001)
    {
        a = a*((3*(n+1))/(n*(3*n+3)));
        n++;
    }
    printf("%.10lf\n",a);
}
