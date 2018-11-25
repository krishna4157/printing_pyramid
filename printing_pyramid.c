/******************************************************************************

       Program for printing pyramids surrounded by 1's eg    1
                                                            121
                                                             1

*******************************************************************************/

#include <stdio.h>

int main()
{
int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n-i;k++){
            printf("%d",k);
        }
        for(l=n-i-1;l>=1;l--)
        {
            printf("%d",l);
        }

        printf("\n");
    }
}
