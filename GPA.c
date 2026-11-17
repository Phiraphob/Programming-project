//คำนวณ GPA
#include <stdio.h>

int main()
{
    //Program GPA

    //input
    int a;//Math
    int b;//Chemical
    int c;//Bio
    int d;//Physics

    float a_c;//Math credit
    float b_c;//Chemical credit
    float c_c;//Bio credit
    float d_c;//Physics credit

    printf("Enter Math score: ");
    scanf("%d",&a);
    printf("Enter Math credit: ");
    scanf("%f",&a_c);

    printf("Enter Chemical score: ");
    scanf("%d",&b);
    printf("Enter Chemical credit: ");
    scanf("%f",&b_c);

    printf("Enter Bio score: ");
    scanf("%d",&c);
    printf("Enter Bio credit: ");
    scanf("%f",&c_c);

    printf("Enter Physics score: ");
    scanf("%d",&d);
    printf("Enter Physics credit: ");
    scanf("%f",&d_c);

    //process
    float a_g;//Math Grade
    float b_g;//Chemical Grade
    float c_g;//Bio Grade
    float d_g;//Physics Grade

    //total credit
    float total_credit = a_c + b_c + c_c + d_c;

    //Math Grade
    if(a >= 80){
        printf("Grade Math A\n");
        a_g = 4.00;
    } else if(a >= 70){
        printf("Grade Math B\n");
        a_g = 3.00;
    }else if(a >= 60){
        printf("Grade Math C\n");
        a_g = 2.00;
    }else if(a >= 50){
        printf("Grade Math D\n");
        a_g = 1.00;
    }else{
        printf("Grade Math F\n");
        a_g = 0.00;
    }

    //Chemical Grade
    if(b >= 80){
        printf("Grade Chemical A\n");
        b_g = 4.00;
    } else if(b >= 70){
        printf("Grade Chemical B\n");
        b_g = 3.00;
    }else if(b >= 60){
        printf("Grade Chemical C\n");
        b_g = 2.00;
    }else if(b >= 50){
        printf("Grade Chemical D\n");
        b_g = 1.00;
    }else{
        printf("Grade Chemical F\n");
        b_g = 0.00;
    }

    //Bio Grade
    if(c >= 80){
        printf("Grade Bio A\n");
        c_g = 4.00;
    } else if(c >= 70){
        printf("Grade Bio B\n");
        c_g = 3.00;
    }else if(c >= 60){
        printf("Grade Bio C\n");
        c_g = 2.00;
    }else if(c >= 50){
        printf("Grade Bio D\n");
        c_g = 1.00;
    }else{
        printf("Grade Bio F\n");
        c_g = 0.00;
    }

    //Physics Grade
    if(d >= 80){
        printf("Grade Physics A\n");
        d_g = 4.00;
    } else if(d >= 70){
        printf("Grade Physics B\n");
        d_g = 3.00;
    }else if(d >= 60){
        printf("Grade Physics C\n");
        d_g = 2.00;
    }else if(d >= 50){
        printf("Grade Physics D\n");
        d_g = 1.00;
    }else{
        printf("Grade Physics F\n");
        d_g = 0.00;
    }

    //GPA Process
    float GPA = (a_g * a_c + b_g * b_c + c_g * c_c + d_g * d_c) / total_credit;//GPA = (Grade * Credit) / Total Credit                  

    //output
    printf("----- Summary -----\n");
    printf("Grade Math = %.2f\n",a_g);
    printf("Grade Chemical = %.2f\n",b_g);
    printf("Grade Bio = %.2f\n",c_g);
    printf("Grade Physics = %.2f\n",d_g);
    printf("GPA = %.2f\n",GPA);

    return 0;
}
