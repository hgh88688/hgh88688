#include<stdio.h>
#include<string.h>
void main()
{
    int x=15,y;
    char a[]="卢拯是什么？";
    printf("%s\n",a);
    scanf("%s",&a);
    if(strcmp("卢拯是傻逼",a)==0)
    {
     printf("请输入你所猜的数字:");
     scanf("%d",&y);
     for(;y!=x;)
     {
         printf("你猜错了，请再输入一遍\n");
         scanf("%d",&y);
     }
     printf("恭喜你猜对了！");
    }

    else
    {
        printf("你输入的暗号有误！");
    }
}
