#include<stdio.h>
int main()
{
    int n,k[4]= {1,0,0,0},m;
    scanf("%d",&n);
    char p[n][50];
    for(int i=0; i<n; i++)
    {
        scanf("%s",p[i]);
        for(int j=0; p[i][j]!='\0'; j++)
        {
            switch (p[i][j])
            {
            case 'A':
                m=k[1];
                k[1]=k[2];
                k[2]=m;
                break;
            case 'B':
                m=k[0];
                k[0]=k[3];
                k[3]=m;
                break;
            case 'C':
                m=k[0];
                k[0]=k[2];
                k[2]=m;
                m=k[1];
                k[1]=k[3];
                k[3]=m;
                break;
            case 'D':
                m=k[0];
                k[0]=k[1];
                k[1]=m;
                m=k[3];
                k[3]=k[2];
                k[2]=m;
                break;
            case 'E':
                m=k[0];
                k[0]=k[3];
                k[3]=m;
                m=k[1];
                k[1]=k[2];
                k[2]=m;
                break;
            }
        }
        for(int j=0; j<4; j++)
        {
            if(k[j]==1)
            {
                printf("%d\n",j+1);
                k[j]=0;
                break;
            }
        }
        k[0]=1;
    }
    return 0;
}

