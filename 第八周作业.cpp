#include<stdio.h>
int main(){
	int a,b,c,d,x;
	printf("�������ж����ˣ�",a);
	scanf("%d",&a);
	printf("��Ӣ���������",b);
	scanf("%d",&b);
	printf("������������",c);
	scanf("%d",&c);
	printf("�����������������",d);
	scanf("%d",&d);
	x=b+c-a+d;
	if(x>=0)
	printf("���߶����������%d",x);
    else
	printf("�������ݴ����޷�����");
	return 0;
}
