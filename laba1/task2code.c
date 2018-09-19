#include<stdio.h>
#include<math.h>
int main()
{
int m,n,c,k,p;
scanf("%d%d",&m,&n);
p=++m>--n;
k=--n<++m;
c=m-++n;
printf("calculation\n%d\n%d\n%d\n",c,k,p);
}
