#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int k[m][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&k[i][j]);
        }
    }
    int max=0,min=2000,x=0,n=0,sum=0;
    for(int i=0;i<m-2;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum+=(k[j][0]*4)+(k[j][1]*2)+(k[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            x=i;
        }
        if(min>sum)
        {
            min=sum;
            n=i;
        }
        sum=0;
    }
    printf("%d %d",x+1,n+1);
}
