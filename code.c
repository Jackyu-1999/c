  1. 输入三个整数x,y,z，请把这三个数由小到大输出。


```c
# include <stdio.h>
int main()
{
	int x,y,z,t;
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y)
	{
		t=x; x=y; y=t;
	}
	if(x>z)
	{
		t=x; x=z; z=t;
	}
	if(y>z)
	{
		t=y; y=z; z=t;
	}
	printf("small to big: %d%d%d", x,y,z);
	return 0;
}
```

2. 判断2000-2500之间的闰年。

```c
# include <stdio.h>
int main()
{
	int year;
	printf("input year: ");
	scanf("%d",&year);
	if (year>=2000 && year<=2500)
			fun(year);
	else 
		printf("您输入的数字不在范围内，请重新输入有效数字: ");
		scanf("%d",&year);
		fun(year);
	return 0;
 } 
 int fun(int year)
 {
 	if(year%4==0 && year%100!=0 || year%400==0)
		printf("%d是闰年",year);
	else
		printf("%d不是闰年",year);
 }
```

3. 平方根

```c
# include <stdio.h>
# include <math.h>
int main()
{
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc = b*b-4*a*c;
	p = -b/(2.0*a);
	q = sqrt(disc)/(2.0*a);
	x1 = p+q;
	x2 = p-q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	return 0;
 } 
```

  4. 九九乘法表。


```c
# include <stdio.h>
int main() 
{ 
    int i,j,result; 
    printf("\n"); 
    for (i=1;i<10;i++) 
    { 
        for(j=1;j<10;j++) 
        { 
        result=i*j; 
        printf("%d*%d=%-3d",i,j,result);/*-3d表示左对齐，占3位*/ 
        } 
        printf("\n");/*每一行后换行*/ 
    } 
    return 0;
} 
```

5. 杨辉三角。

```c
# include <stdio.h>
int main()
{
	int a[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++) 
		{
			if(i==j||j==0)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];			
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
```

  6. 斐波那契数列。

```c
# include <stdio.h>
int main() 
{ 
    long f1,f2; 
    int i; f1=f2=1; 
    for(i=1;i<=20;i++) 
    { 
        printf("%12ld %12ld",f1,f2); 
        if(i%2==0) 
           	printf("\n");
        f1=f1+f2;       
        f2=f1+f2; 
    } 
    return 0;
} 
```

  7. 判断1-100之间有多少个素数，并输出所有素数。

```c
# include <stdio.h>
int main()
{
	int i,j,flag;
	for(i=2;i<=100;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				flag=0;
		}
	if(flag==1)
		printf("%5d\n",i);
	}
	return 0;
} 
```

  8. 一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程找出1000以内的所有完数。

```c
# include <stdio.h>
int main()
{
    int i, j, s, n;  /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
	printf("请输入所求范围上限："); 
    scanf("%d", &n);  /* n的值由键盘输入*/
    for( i=2; i<=n; i++ )
    {
        s=0;  /*保证每次循环时s的初值为0*/
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)  /*判断j是否为i的因子*/
                s += j;
        }
        if(s == i)  /*判断因子之和是否和原数相等*/
            printf("完数:%d\n", i);
    }
    return 0;
}
```

  9. 输入两个正整数m和n，求其最大公约数和最小公倍数。

```c
#include <stdio.h>
//两数相乘的积除以这两个数的最大公约数就是最小公倍数。
int main()
{
    int num1,num2,m,n,t;
    printf("请输入两个数: ");
    scanf("%d,%d",&num1,&num2);
    if(num1<num2)
    {
        t=num1;
        num1=num2;
        num2=t;
    }
    m=num1*num2;
    n=num1%num2;
    while(n!=0)
    {
        num1=num2;
        num2=n;
        n=num1%num2;
    }
    printf("最大公约数: %d\n",num2);
    printf("最小公倍数: %d\n",m/num2);
    return 0;
}
```

  10. 水仙花数。

```c
# include <stdio.h>
int main()
{
	int a,b,c,i;
	printf("水仙花数：");
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(100*a+10*b+c==a*a*a+b*b*b+c*c*c)
			printf("%-5d",i); 
	}
	return 0;
}
```

  11. 猴子吃桃问题。

```c
# include <stdio.h>
int main()
{
    int day,x1,x2;    /*定义 day、x1、x2 3 个变量为基本整型*/
    day=9;
    x2=1;
    while(day>0)
    {
        x1=(x2+1)*2;    /*第一天的桃子数是第二天桃子数加1后的2倍*/
        x2=x1;
        day--;    /*因为从后向前推所以天数递减*/
    }
    printf("the total is %d\n",x1);    /* 输出桃子的总数*/
    return 0;
}
```

  12. 求n的阶乘（n!）。 


```c
# include <stdio.h>
int main()
{
	int i,n;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum*=i;
	printf("%d!=%lf",n,sum);
	return 0;
 } 
```

  13. 给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。90分以上为‘A’，80-89分为‘B’，70-79分为‘C’，60~69分为‘D’，60分以下为’E‘。


```c
# include <stdio.h>
# include <stdlib.h>
int main()
{
    int score;
    scanf("%d", &score);
    while (score < 0 || score >100)
    {
        printf("Error! Retry!\n");
        scanf("%d", &score);
    }
    if (score < 60)
        printf("Grade is E!\n");
    else if (score >= 60 && score < 70)
        printf("Grade is D!\n");
    else if (score >= 70 && score < 80)
        printf("Grade is C!\n");
    else if (score >=80 && score < 90)
        printf("Grade is B!\n");
    else
        printf("Grade is A!\n");
    return 0;
}
```

  14. 回文数。 


```c
# include <stdio.h>
int main()
{
    int n,s,num,m=0;
    printf("请输入一个正整数：");
    scanf("%d",&num);
    s = num;
    while(s!=0)
    {
        n = s%10;   //n是s的末位数
        m = m*10 +n; //把s的末位数放到m的末位
        s = s/10;  //去掉末位数的新s
    }
    if (num == m)
        printf("%d 是回文数\n", num);
    else
        printf("%d 不是回文数\n",num);
    return 0;
}
```

  15. 将一个数组逆序输出。

```c
# include<stdio.h>
int main()
{
	int i,t,a[5] = {1,2,3,4,5};
	int begin = 0, end = 4;
	printf("Before reverse order：");
	for (i=0; i<5; i++)
		printf("%d", a[i]);
	printf("\n");
	while (begin<end)
	{
		t = a[begin];
		a[begin] = a[end];
		a[end] = t;
		begin++;
		end--;
	}
	printf("After reverse order：");
	for (i=0; i<5;i++)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
```

  16. 编写一个函数,由实参传来一个字符串,统计此字符串中字母、数字、空格和其他字符的个数,在主函数中输人字符串以及输出上述的结果。


```c
#include<stdio.h>
int letter, num, space, others;
void CountStr(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
			letter++;
		else if (str[i] >= '0' && str[i] <= '9') 
			num++;
		else if (str[i] == ' ')
			space++;
		else
			others++;  
	}
}
int main()
{
	char text[80];
	printf("input string:");
	gets(text);
	printf("string: %s\n", text);
	CountStr(text);
	printf("\nletter:%d\nnum:%d\nspace:%d\nothers:%d\n", letter, num, space, others);
	return 0;
}
```


  17. 静态链表。


```c
# include <stdio.h>
struct student
{
	int num;
	char *name;
	float score;
	struct student *next;
};
int main()
{
	struct student a,b,c,*head,*p;
	a.num=1; a.name="y"; a.score=94.5; 
	b.num=2; b.name="z"; b.score=90.1;
	c.num=3; c.name="p"; c.score=99.9;
	head=&a; 
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head; 
	do{
		printf("%2d,%s,%f\n",p->num,p->name,p->score);
		p=p->next;
	}while(p!=NULL);
	return 0;
}
```

  18. 冒泡排序。

```c
# include <stdio.h>
void main()
{
	int i,j,t,a[5]={5,4,3,2,1};
	for(i=1;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1]) // > 升序  < 降序 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	 }
	for(i=0;i<5;i++)
		printf("%d",a[i]);
}
```

  19. 选择排序。


```c
# include <stdio.h>
void main()
{
    int i, j,t,min;
    int a[5] = {5,4,3,2,1};
    for(i = 0; i < 5; i ++)
	{
        for(j = i;j < 5; j ++)
		{
            min = a[i]; 
            if(a[j] < min)  //  < 升序 > 降序 
			{
                t = a[j];
                a[j] = min;
                min = t;
            }
            a[i] = min; 
        }
    }
    for(i = 0; i < 5; i ++)
        printf("%d ",a[i]);
}
```

  20. 插入排序。


```c
# include <stdio.h>
void insertSort(int * a, int len)
{
    int i,j,t;
    for(i=1; i<len; i++)
    {
        t = a[i];
        for(j=i-1;a[j]>t;j--) // > 升序 < 降序 
            {
            	a[j+1] = a[j];
			}
        a[j+1] = t;	
    }
}
int main()
{
    int i,arr[5] = {5,4,3,2,1};
    insertSort(arr,5);
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
    return 0;
}
```
