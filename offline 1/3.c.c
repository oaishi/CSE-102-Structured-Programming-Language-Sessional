#include<stdio.h>
void main()
{
    int i=0,n,sum=0,k,m,max,q,r;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    max=sum;
    q=0;
    r=n-1;
    for(i=0; i<n; i++)
    {
        m=0;
        for(k=i; k<n; k++)
        {
            m=m+a[k];
            if(m>max)
            {
                max=m;
                q=i;
                r=k;
            }

        }
    }
    printf("%d is the maximum value of subarray which starts from %d:%d",max,q,r);

}

