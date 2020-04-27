#include<stdio.h>
int main()
{
 int stairs;
 int i,j;
 printf("Enter the number of stairs:");
 scanf("%d",&stairs);
 for (i=0;i<=stairs;++i)
  {
   for (j=0;j<i;++j)
    {
      printf("01");
    }
   printf("\n");
  }
 return 0;
}
