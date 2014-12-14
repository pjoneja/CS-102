//
//  quad.c
//  CS-102
//
//  Created by Pranav on 9/18/14.
//  Copyright (c) 2014 Cooper Union. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    // an attempt to demo the quadratic equation solving program
    double a,b,c,x1,x2,radical;
    double sqrt();
    //int n;   <------ THIS LINE IS UNNECESSARY!
    char resp;
    for(;;)
    {
        printf("Give me a value for a:");
        scanf("%lf",&a);
        printf("The value of a is %lf\n",a);
        if(a==0.0)
        {
            printf("ERROR a cannot be equal zero\n");
            continue;
        }
        printf("Give me the value for b:");
        scanf("%lf",&b);
        printf("The value of b is %lf\n",b);
        printf("Give me the value for c:");
        scanf("%lf",&c);
        printf("The value of c is %lf\n",c);
        radical=b*b-(4.0*a*c);
        printf("The value of b*b-(4.0*a*c) is %lf\n",radical);
        if(radical < 0.0)
        {
            printf("Whoops square root of a neg number\n");
            continue;
        }
        x1=(-b+sqrt(radical))/(2.0*a);
        x2=(-b-sqrt(radical))/(2.0*a);
        printf("x1 = %lf\n",x1);
        printf("x2 = %lf\n",x2);
        printf("Try again?");
        // the below two lines are intended to flush out the newline
        while(getchar()!='\n')
            ;
        resp=getchar();
        printf("%c\n",resp);
        // the below two lines are intended to flush out the newline
        while(getchar()!='\n')
            ;
        if(resp!='y')
            break;
    }
}

