#include<stdio.h>
void grid(int,int,char);
void main()
{
    grid(3,5,'*');
    grid(5,5,'8');
}
    void grid(int r,int c , char ch)
   { int i ,j;

for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    printf("%c\t",ch);
    printf("\n");
}
}
