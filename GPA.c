//คำนวณ GPA
#include <stdio.h>
int Grade(int score){
    if(score >= 90 && score <= 100){
        if(score >= 95){
            return 4.00;
        }else{
            return 3.50;
        }
    }
    if(score >= 80 && score <= 90){
        if(score >= 85){
            return 3.00;
        }else{
            return 2.50;
        }
    }
    if(score >= 70 && score <= 80){
        if(score >= 75){
            return 2.00;
        }else{
            return 1.50;
        }
    }
    if(score >= 60 && score <= 70){
        if(score >= 65){
            return 1.00;
        }else{
            return 0.00;
        }
    }
    return -1; // Invalid score
}

int main()
{
    //Program GPA

    //input
    int a;//Math
    int b;//Chemical
    int c;//Bio
    int d;//Physics
    int f;//English

    float a_c;//Math credit
    float b_c;//Chemical credit
    float c_c;//Bio credit
    float d_c;//Physics credit
    float f_c;//English credit

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

    printf("Enter English score: ");
    scanf("%d",&f);
    printf("Enter English credit: ");
    scanf("%f",&f_c);

    //process
    float a_g;//Math Grade
    float b_g;//Chemical Grade
    float c_g;//Bio Grade
    float d_g;//Physics Grade
    float f_g;//English Grade

    //total credit
    float total_credit = a_c + b_c + c_c + d_c + f_c;

    //Math Grade
    a_g = Grade(a);

    //Chemical Grade
    b_g = Grade(b);

    //Bio Grade
    c_g = Grade(c);

    //Physics Grade
    d_g = Grade(d);

    //English Grade
    f_g = Grade(f);

    //GPA Process
    float GPA = (a_g * a_c + b_g * b_c + c_g * c_c + d_g * d_c + f_g * f_c) / total_credit;//GPA = (Grade * Credit) / Total Credit                  

    //output
    printf("----- Summary -----\n");
    printf("Grade Math = %.2f\n",a_g);
    printf("Grade Chemical = %.2f\n",b_g);
    printf("Grade Bio = %.2f\n",c_g);
    printf("Grade Physics = %.2f\n",d_g);
    printf("Grade English = %.2f\n",f_g);
    printf("GPA = %.2f\n",GPA);

    return 0;
}
