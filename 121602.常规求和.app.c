#include<stdio.h>
void main()
{
int x,y=0;
scanf("%d",&x);
do{
y=x+y;
x--;
}
while(x>=0);
printf("%d\n",y);

}
