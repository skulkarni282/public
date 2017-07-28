#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,n,ans;
  clrscr();
  printf("Enter any four digit number:");
  scanf("%d",&n);
  a=n%10; //4
  n=n/10; //123
  b=n%10; //3
  n=n/10; //12
  c=n%10; //2
  n=n/10; //1
  ans=a+b+c+n;
  printf("Addition of single digit is:%d",ans);
  getch();
}
