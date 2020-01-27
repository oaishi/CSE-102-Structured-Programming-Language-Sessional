#include<stdio.h>
void main()
{
    int i=0,m,year,day=0,j=0,h,t,y;
    printf("Enter Month:(1-12):");
    scanf("%d",&m);
    printf("Enter Year:");
    scanf("%d",&year);
    printf("Calender for:");
    printf("\n");
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
    printf("  %d",year);
    printf("\n");
    printf("\n");
    printf(" ");
    switch(day)
    {
    case 0:
        printf("SAT ");
    case 1:
        printf("SUN ");
    case 2:
        printf("MON ");
    case 3:
        printf("TUE ");
    case 4:
        printf("WED ");
    case 5:
        printf("THU ");
    case 6:
        printf("FRI");
    }
    printf("\n");
    if(m==1||m==2)
    {
        t=m+12;
        y=year-1;
    }
    else
    {
        t=m;
        y=year;
    }
    h=1 + (int)((26*(t+1))/10) + y + (int)(y/4) + 6*(int)(y/100) + (int)(y/400);
    h=h%7;
    switch(h)
    {
    case 0:
    {
        for(i=1; i<8; i++)
            printf("%4d",i);
        printf("\n");
        for(i=8; i<=14; i++)
            printf("%4d",i);
        printf("\n");
        for(i=15; i<=21; i++)
            printf("%4d",i);
        printf("\n");
        for(i=22; i<=28; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2 && (year%400==0 || (year%100!=0 && year%4==0)))
            printf("  29");
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=29; i<=31; i++)
                printf("%4d",i);
        }
        if(m==4||m==6||m==9||m==11)
        {
            for(i=29; i<=30; i++)
                printf("%4d",i);
        }
    }
    break;
    case 1:
    {
        printf("    ");
        for(i=1; i<=6; i++)
            printf("%4d",i);
        printf("\n");
        for(i=7; i<=13; i++)
            printf("%4d",i);
        printf("\n");
        for(i=14; i<=20; i++)
            printf("%4d",i);
        printf("\n");
        for(i=21; i<=27; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2)
        {
            if(year%400==0 || (year%100!=0 && year%4==0))
            {
                for(i=28; i<=29; i++)
                    printf("%4d",i);
            }
            else
            {
                printf("  28");
            }
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=28; i<=31; i++)
                printf("%4d",i);
        }
        if(m==4||m==6||m==9||m==11)
        {
            for(i=28; i<=30; i++)
                printf("%4d",i);
        }
    }
    break;
    case 2:
    {
        for(i=1; i<=2; i++)
            printf("    ");
        for(i=1; i<=5; i++)
            printf("%4d",i);
        printf("\n");
        for(i=6; i<=12; i++)
            printf("%4d",i);
        printf("\n");
        for(i=13; i<=19; i++)
            printf("%4d",i);
        printf("\n");
        for(i=20; i<=26; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2)
        {
            if(year%400==0 || (year%100!=0 && year%4==0))
            {
                for(i=27; i<=29; i++)
                    printf("%4d",i);
            }
            else
            {
                for(i=27; i<=28; i++)
                    printf("%4d",i);
            }
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=27; i<=31; i++)
                printf("%4d",i);
        }
        if(m==4||m==6||m==9||m==11)
        {
            for(i=27; i<=30; i++)
                printf("%4d",i);
        }
    }
    break;
    case 3:
    {
        for(i=1; i<=3; i++)
            printf("    ");
        for(i=1; i<=4; i++)
            printf("%4d",i);
        printf("\n");
        for(i=5; i<=11; i++)
            printf("%4d",i);
        printf("\n");
        for(i=12; i<=18; i++)
            printf("%4d",i);
        printf("\n");
        for(i=19; i<=25; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2)
        {
            if(year%400==0 || (year%100!=0 && year%4==0))
            {
                for(i=26; i<=29; i++)
                    printf("%4d",i);
            }
            else
            {
                for(i=26; i<=28; i++)
                    printf("%4d",i);
            }
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=26; i<=31; i++)
                printf("%4d",i);
        }
        if(m==4||m==6||m==9||m==11)
        {
            for(i=26; i<=30; i++)
                printf("%4d",i);
        }
    }
    break;
    case 4:
    {
        for(i=1; i<=4; i++)
            printf("    ");
        for(i=1; i<=3; i++)
            printf("%4d",i);
        printf("\n");
        for(i=4; i<=10; i++)
            printf("%4d",i);
        printf("\n");
        for(i=11; i<=17; i++)
            printf("%4d",i);
        printf("\n");
        for(i=18; i<=24; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2)
        {
            if(year%400==0 || (year%100!=0 && year%4==0))
            {
                for(i=25; i<=29; i++)
                    printf("%4d",i);
            }
            else
            {
                for(i=25; i<=28; i++)
                    printf("%4d",i);
            }
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=25; i<=31; i++)
                printf("%4d",i);
        }
        if(m==4||m==6||m==9||m==11)
        {
            for(i=25; i<=30; i++)
                printf("%4d",i);
        }
    }
    break;
    case 5:
    {
        for(i=1; i<=5; i++)
            printf("    ");
        for(i=1; i<=2; i++)
            printf("%4d",i);
        printf("\n");
        for(i=3; i<=9; i++)
            printf("%4d",i);
        printf("\n");
        for(i=10; i<=16; i++)
            printf("%4d",i);
        printf("\n");
        for(i=17; i<=23; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2)
        {
            if(year%400==0 || (year%100!=0 && year%4==0))
            {
                for(i=24; i<=29; i++)
                    printf("%4d",i);
            }
            else
            {
                for(i=24; i<=28; i++)
                    printf("%4d",i);
            }
        }
        else
        {
            for(i=24; i<=30; i++)
                printf("%4d",i);
        }
        printf("\n");
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            printf("  31");
    }
    break;
    case 6:
    {
        for(i=1; i<=6; i++)
            printf("    ");
        printf("   1");
        printf("\n");
        for(i=2; i<=8; i++)
            printf("%4d",i);
        printf("\n");
        for(i=9; i<=15; i++)
            printf("%4d",i);
        printf("\n");
        for(i=16; i<=22; i++)
            printf("%4d",i);
        printf("\n");
        if(m==2 && (year%400==0 || (year%100!=0 && year%4==0)))
        {
            for(i=23; i<=29; i++)
                printf("%4d",i);
        }
        else if(m==2)
        {
            for(i=23; i<=28; i++)
                printf("%4d",i);
        }
        else
        {
            for(i=23; i<=29; i++)
                printf("%4d",i);
        }
        printf("\n");
        if(m==4||m==6||m==9||m==11)
            printf("  30");
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            for(i=30; i<=31; i++)
                printf("%4d",i);
        }

    }
    }

}


