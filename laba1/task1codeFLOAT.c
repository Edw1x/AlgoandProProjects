#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
a=1000;
b=0.0001;
c=(pow(a-b,2)-(pow(a,2)-2*a*b))/pow(b,2);
printf("calculation\n%f",c);
scanf("%f%f",&a,&b);
}

