#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ch;
    printf("Choice\n");
    scanf("%d",&ch);

    int min,max;
    switch(ch)
    {
    case 1:  // Q1:
            printf("To solve your equation\nEnter your parameter a,b and c:\n");
            int a,b,c;
            printf("Enter the first number:\n");
            scanf("%d",&a);
            printf("Enter the second number:\n");
            scanf("%d",&b);
            printf("Enter the third number:\n");
            scanf("%d",&c);

            float sol_1;
            float sol_2;
            if(a!=0)
            {
                sol_1= ( -b+sqrt(b*b-4*a*c) ) / (2*a);
                if(b==c)
                {
                    printf("You you one specific solution that is: %f",sol_1);
                }
                else
                {
                    sol_2= ( -b-sqrt(b*b-4*a*c) ) / (2*a);
                    printf("You you 2 solutions: %f , %f.",sol_1,sol_2);
                }
            }
            else
            {
                printf("Divide by zero!!!!");
            }
                break;
            ///////////////////////////////////////////////////
    case 2:   //Q2    without loop
        int v1,v2,v3,v4,v5;
        printf("Enter you values:\n");
        scanf("%d",&v1);
        scanf("%d",&v2);
        scanf("%d",&v3);
        scanf("%d",&v4);
        scanf("%d",&v5);

        min=max=v1;

        if(v2>max) max=v2;
        if(v3>max) max=v3;
        if(v4>max) max=v4;
        if(v5>max) max=v5;

        if(v2<min) min=v2;
        if(v3<min) min=v3;
        if(v4<min) min=v4;
        if(v5<min) min=v5;

        printf("The maximum value is: %d\n",max);
        printf("The minimum value is: %d",min);

        break;
        ///////////////////////////////////////////////////
    case 3:   //Q3   with loop

        int num;
        printf("Enter you values:\n");

        for(int i=0;i<5;i++)
        {
            scanf("%d",&num);
            if(num>=max)
              max=num;
            else if(num<min)
              min=num;
        }

        printf("The maximum: %d\nThe minimum: %d.",max,min);
        break;

    }
    return 0;
}
