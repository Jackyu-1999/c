  1. ������������x,y,z���������������С���������


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

2. �ж�2000-2500֮������ꡣ

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
		printf("����������ֲ��ڷ�Χ�ڣ�������������Ч����: ");
		scanf("%d",&year);
		fun(year);
	return 0;
 } 
 int fun(int year)
 {
 	if(year%4==0 && year%100!=0 || year%400==0)
		printf("%d������",year);
	else
		printf("%d��������",year);
 }
```

3. ƽ����

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

  4. �žų˷���


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
        printf("%d*%d=%-3d",i,j,result);/*-3d��ʾ����룬ռ3λ*/ 
        } 
        printf("\n");/*ÿһ�к���*/ 
    } 
    return 0;
} 
```

5. ������ǡ�

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

  6. 쳲��������С�

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

  7. �ж�1-100֮���ж��ٸ����������������������

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

  8. һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.����ҳ�1000���ڵ�����������

```c
# include <stdio.h>
int main()
{
    int i, j, s, n;  /*����i����ѡ������Χ��j���Ƴ�����Χ��s��¼�ۼ�����֮��*/
	printf("����������Χ���ޣ�"); 
    scanf("%d", &n);  /* n��ֵ�ɼ�������*/
    for( i=2; i<=n; i++ )
    {
        s=0;  /*��֤ÿ��ѭ��ʱs�ĳ�ֵΪ0*/
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)  /*�ж�j�Ƿ�Ϊi������*/
                s += j;
        }
        if(s == i)  /*�ж�����֮���Ƿ��ԭ�����*/
            printf("����:%d\n", i);
    }
    return 0;
}
```

  9. ��������������m��n���������Լ������С��������

```c
#include <stdio.h>
//������˵Ļ������������������Լ��������С��������
int main()
{
    int num1,num2,m,n,t;
    printf("������������: ");
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
    printf("���Լ��: %d\n",num2);
    printf("��С������: %d\n",m/num2);
    return 0;
}
```

  10. ˮ�ɻ�����

```c
# include <stdio.h>
int main()
{
	int a,b,c,i;
	printf("ˮ�ɻ�����");
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

  11. ���ӳ������⡣

```c
# include <stdio.h>
int main()
{
    int day,x1,x2;    /*���� day��x1��x2 3 ������Ϊ��������*/
    day=9;
    x2=1;
    while(day>0)
    {
        x1=(x2+1)*2;    /*��һ����������ǵڶ�����������1���2��*/
        x2=x1;
        day--;    /*��Ϊ�Ӻ���ǰ�����������ݼ�*/
    }
    printf("the total is %d\n",x1);    /* ������ӵ�����*/
    return 0;
}
```

  12. ��n�Ľ׳ˣ�n!���� 


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

  13. ����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����90������Ϊ��A����80-89��Ϊ��B����70-79��Ϊ��C����60~69��Ϊ��D����60������Ϊ��E����


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

  14. �������� 


```c
# include <stdio.h>
int main()
{
    int n,s,num,m=0;
    printf("������һ����������");
    scanf("%d",&num);
    s = num;
    while(s!=0)
    {
        n = s%10;   //n��s��ĩλ��
        m = m*10 +n; //��s��ĩλ���ŵ�m��ĩλ
        s = s/10;  //ȥ��ĩλ������s
    }
    if (num == m)
        printf("%d �ǻ�����\n", num);
    else
        printf("%d ���ǻ�����\n",num);
    return 0;
}
```

  15. ��һ���������������

```c
# include<stdio.h>
int main()
{
	int i,t,a[5] = {1,2,3,4,5};
	int begin = 0, end = 4;
	printf("Before reverse order��");
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
	printf("After reverse order��");
	for (i=0; i<5;i++)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
```

  16. ��дһ������,��ʵ�δ���һ���ַ���,ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ���,���������������ַ����Լ���������Ľ����


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


  17. ��̬����


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

  18. ð������

```c
# include <stdio.h>
void main()
{
	int i,j,t,a[5]={5,4,3,2,1};
	for(i=1;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1]) // > ����  < ���� 
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

  19. ѡ������


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
            if(a[j] < min)  //  < ���� > ���� 
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

  20. ��������


```c
# include <stdio.h>
void insertSort(int * a, int len)
{
    int i,j,t;
    for(i=1; i<len; i++)
    {
        t = a[i];
        for(j=i-1;a[j]>t;j--) // > ���� < ���� 
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
