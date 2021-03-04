#include<stdio.h>
#include<string.h>
int main()
{
     int i,j=1;
    char a[200],b[200];
    scanf ("%s",a);
    b[0]=a[0];
    for (i=0;i<strlen(a);i++)
    {
        if (a[i]=='\0')
            break;
        if (a[i]!=a[i+1])
        {
            b[j]=a[i+1];
            j++;
        }
    }
    printf ("%s",b);
return 0;
}
