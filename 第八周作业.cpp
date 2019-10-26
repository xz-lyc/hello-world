#include<stdio.h>
int main(){
	int a,b,c,d,x;
	printf("旅行社有多少人：",a);
	scanf("%d",&a);
	printf("会英语的人数：",b);
	scanf("%d",&b);
	printf("会俄语的人数：",c);
	scanf("%d",&c);
	printf("两样都不会的人数：",d);
	scanf("%d",&d);
	x=b+c-a+d;
	if(x>=0)
	printf("两者都会的人数：%d",x);
    else
	printf("输入数据错误，无法计算");
	return 0;
}
