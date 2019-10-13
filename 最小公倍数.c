#include<stdio.h>
int main()
{
  int a,b,m,n,y,x;
  printf("输入两个正整数：\n");
  scanf ("%d%d",&m,&n);
  if(m>n)
    a=n,b=m;
    else a=m , b=n;
  int i=1;
  for(i=1;i<=a;i=i+1)
  {
   if(a%i==0 && b%i==0)
   y=i;
}
    x=a*b/y;
     printf("它们的最小公倍数为：%d",x);
     return 0;
 }
