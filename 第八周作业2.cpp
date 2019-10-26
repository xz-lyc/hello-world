#include<stdio.h>
int main(){
	int a[5],i,j,t;
	printf("enter 5 numbers:");
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);}
	for(j=0;j<4;j++)
	for(i=0;i<4-j;i++)
	if(a[i]>a[i+1])
{
	t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
	}	
	printf("the max is:%d%d%d%d%d",a[4],a[3],a[2],a[1],a[0]);
	return 0;
}
