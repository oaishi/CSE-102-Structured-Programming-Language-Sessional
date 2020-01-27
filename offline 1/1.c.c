#include<stdio.h>
void main()
{
    int q,h,y,m;
    printf("enter the year:");
    scanf("%d",&y);
    printf("enter the month(1-12):");
    scanf("%d",&m);
    printf("enter the date:");
    scanf("%d",&q);
    switch(m)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }
    if(m==1||m==2)
    {
        m=m+12;
        y=y-1;
    }
    else
    {
        m=m;
        y=y;
    }
    h=q + (int)((26*(m+1))/10) + y + (int)(y/4) + 6*(int)(y/100) + (int)(y/400);
    h=h%7;
    printf(" %d,%d is ",q,y);
    switch(h)
    {
    case 0:
        printf("saturday");
        break;
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
    }
}
