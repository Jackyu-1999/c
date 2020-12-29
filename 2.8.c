
#include <stdio.h>
 
void main()
 
{
 
 int year,leap;
 
 scanf("%d",&year);
 
 if(year%4==0)
 
 {
 
  if(year%100!=0)
 
   leap=1;
 
  else
 
  {
 
   if(year%400==0)
 
    leap=1;
 
   else

    leap=0;
 
  }
 
 }
 
 if(leap==1)
 
  printf("%d是闰年n",year);
 
 else
 
  printf("%d不是闰年n",year);}

