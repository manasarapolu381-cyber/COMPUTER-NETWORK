#include<stdio.h>
#include<string.h>
void main()
{
 int i=0,j=0,n,pos;
 char a [20],b [100],ch;
 printf("Enetr the string:\n");
 scanf("%s",a);
 n=strlen(a);
 printf("Enter position to insert the character:\n");
 scanf("%d",& pos);
 while(pos<1||pos>n+1)
 {
  printf("invalid positon , enter again :");
  scanf("%d",&pos);
 }
 getchar();
 printf("Enter the character to staff:\n");
 ch=getchar();
 b[0]='d';b[1]='1';b[2]='e';b[3]='s';b[4]='t';b[5]='x'; j=6;
 for (i=0;i<n;i++)
 {
  if(i==pos-1)
  {
   b[j++]='d';b[j++]='1';b[j++]='e';b[j++]=ch;
   b[j++]='d';b[j++]='1';b[j++]='e';
  }
  if(a[i]=='d'&& a[i+1]=='1'&&a[i+2]=='e');
  {
   b[j++]='d';b[j++]='1';b[j++]='e';
  }
  b[j++]=a[i];
 }
 if (pos==n+1)
 {
  b[j++]='d';b[j++]='1';b[j++]='e'; b[j++]=ch;
  b[j++]='d';b[j++]='1';b[j++]='e';
 }
 b[j++]='d';b[j++]='1';b[j++]='e';b[j++]='e';
 b[j++]='t';
 b[j++]='x';
 b[j]='0';
 printf("\n frame after stuffing :\n %s \n",b);
}

