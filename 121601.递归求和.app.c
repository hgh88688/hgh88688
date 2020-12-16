#include<stdio.h>
int hgh(int x)
{
	if(x<=0)
	{return 0;}
	return x+hgh(x-1);
}
void main()
{
int a;
printf("请输入你要递归的数:");
scanf("%d",&a);
printf("它的递归为%d\n",hgh(a));


}
