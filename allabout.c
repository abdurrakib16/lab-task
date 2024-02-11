//Problem-01 (Skeleton)

#include <stdio.h> //add a header file
int main() //code start from here
{
    //this is main body
    //It will be display to user
    
    return 0; //return an integer number (optional)
}







//Problem-2 (Hello world)

#include <stdio.h>
int main()
{
    printf("Hello world"); //first program

    return 0;
}







//Problem-3 (Prinf)

#include <stdio.h>
int main()
{
    printf("Name: Abdur Rakib \nUniv: Northern University Bangladesh"); //first program

    return 0;
}








//Problem-4 (Print diamond)

#include <stdio.h>
int main()
{
    printf("     * \n");
    printf("    *** \n");
    printf("   ***** \n");
    printf("  ******* \n");
    printf(" ********* \n");
    printf("  ******* \n");
    printf("   ***** \n");
    printf("    *** \n");
    printf("     * \n");

    getch();
    return 0;
}





//Problem-4: Basic calculation

#include<stdio.h>
int main()
{
    int a=10, b=20, c=30;

    int sum=a+b+c;
    int mal=a*b*c;

    printf("Your sum is %d \n", sum);
    printf("Your mal is %d", mal);

    getch();
    return 0;
}







//Problem-7 ASCII value

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter word: ");
    scanf("%c", &ch);

    printf("Your ASCII value is: %d", ch);

    getch();
    return 0;
}






//Problem-8 (avarage)
#include<stdio.h>>
int main()
{
    double x, y, z, avg;
    printf("Enter 3 number: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    avg=(x+y+z)/3;
    printf("Average of x, y and z is: %lf", avg);

    getch();
    return 0;
}







//Problem-9 (Print Bangladesh by ASCII value
#include <stdio.h>
int main()
{
    printf("Our country is %c%c%c%c%c%c%c%c%c%c", 66,97,110,103,108,97,100,101,115,104);

    getch();
    return 0;
}






//Problem-10.1 (Precession)
#include<stdio.h>
int main()
{
    float phy=65.00, math=83.50, c=85.75, eng=67.50;

    float avg=(phy+math+c+eng)/4;
    printf("Your result is %0.2f", avg);

    getch();
    return 0;
}






//Problem-10.2 GPA calculator

#include <stdio.h>
int main()
{
    float phy, math, che, ict;
    printf("Enter your physics point: ");
    scanf("%f", &phy);
     printf("Enter your math point: ");
    scanf("%f", &math);
     printf("Enter your Chemistry point: ");
    scanf("%f", &che);
     printf("Enter your ICT point: ");
    scanf("%f", &ict);

    float gpa=(phy+math+che+ict)/4;

    printf("Your gpa is: %0.3f", gpa);

    getch();
    return 0;
}

































































//Problem-X.0 (Find positive number)
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a>0){
        printf("This is positive number!");
    } else if (a==0){
        printf("You enterd zero and zero can not be positive or negative");
    }else{
        printf("This is negative number");
    }

    getch();
    return 0;
}








//Problem-X.1 (Find largest number)
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        if (a>c){
            printf("The largest number is %d", a);
        }else{
        printf("The largest number is %d ", c);
        }
        }else{
        if (b>c){
            printf("The largest number is %d", b);
        }else{
        printf("The largest number is %d", c);
        }
        }
        getch();
        return 0;
    }





//Problem-X.2 (Find lowest number)
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a<b){
        if (a<c){
            printf("The lowest number is %d", a);
        }else{
        printf("The lowest number is %d", c);
        }
    }else{
    if (b<c){
        printf("The lowest number is %d", b);
    }else{
    printf("The lowest number is %d",c);
    }
    }
    getch();
    return 0;
}

