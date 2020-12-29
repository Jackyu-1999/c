#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("输入3个数:\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b)max=b;
    if(max<c)max=c;441
1

.0    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    printf("最大值:%d,最小值:%d\n",max,min);
}

