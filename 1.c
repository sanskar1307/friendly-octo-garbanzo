#include<stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
  int iRange=0;
  if(iStart>iEnd)
  {
    printf("Invalid input");
    return;
  }
  for(iRange=iStart;iRange<iEnd;iRange++)
  {
    printf("%d\t",iRange);
  }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeDisplay(iValue1, iValue2);
return 0;
}
