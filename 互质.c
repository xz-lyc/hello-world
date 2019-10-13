#include<stdio.h>
int main()
{
   int m,n,a,b;
   printf("输入两个正整数：\n");
   scanf("%d%d",&m,&n);
   if(m>n)
   a=n,b=m;
   else a=m,b=n;
   int i=2;
  for(i=2;i<=b;i=i+1)
  {
   if(a%i==0 && b%i==0)
   printf("这两个数不互质");
   else 
   printf("这两个数互质");
   return 0;
}
}
