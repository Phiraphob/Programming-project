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
    int f;//English

    float a_c;//Math credit
    float b_c;//Chemical credit
    float c_c;//Bio credit
    float d_c;//Physics credit
    float f_c;//English credit

    printf("Enter Math score: ");
    scanf("%d",&a);
    printf("Enter Math credit(0.0-2.0): ");
    scanf("%f",&a_c);

    printf("Enter Chemical score: ");
    scanf("%d",&b);
    printf("Enter Chemical credit(0.0-2.0): ");
    scanf("%f",&b_c);

    printf("Enter Bio score: ");
    scanf("%d",&c);
    printf("Enter Bio credit(0.0-2.0): ");
    scanf("%f",&c_c);

    printf("Enter Physics score: ");
    scanf("%d",&d);
    printf("Enter Physics credit(0.0-2.0): ");
    scanf("%f",&d_c);

    printf("Enter English score: ");
    scanf("%d",&f);
    printf("Enter English credit(0.0-2.0): ");
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
    if(a >= 90 && a <= 100){
        if(a >= 95){
            printf("\nGrade Math A\n");
            a_g = 4.00;
        }else{
            printf("Grade Math B+\n");
            a_g = 3.50;
        }
    }
    if(a >= 80 && a <= 90){
        if(a >= 85){
            printf("Grade Math B\n");
            a_g = 3.00;
        }else{
            printf("Grade Math C+\n");
            a_g = 2.50;
        }
    }
    if(a >= 70 && a <= 80){
        if(a >= 75){
            printf("Grade Math C\n");
            a_g = 2.00;
        }else{
            printf("Grade Math D+\n");
            a_g = 1.50;
        }
    }
    if(a >= 60 && a <= 70){
        if(a >= 65){
            printf("Grade Math D\n");
            a_g = 1.00;
        }else{
            printf("Grade Math F\n");
            a_g = 0.00;
        }
    }

    //Chemical Grade
    if(b >= 90 && b <= 100){
        if(b >= 95){
            printf("Grade Chemical A\n");
            b_g = 4.00;
        }else{
            printf("Grade Chemical   B+\n");
            b_g = 3.50;
        }
    }
    if(b >= 80 && b <= 90){
        if(b >= 85){
            printf("Grade Chemical B\n");
            b_g = 3.00;
        }else{
            printf("Grade Chemical C+\n");
            b_g = 2.50;
        }
    }
    if(b >= 70 && b <= 80){
        if(b >= 75){
            printf("Grade Chemical C\n");
            b_g = 2.00;
        }else{
            printf("Grade Chemical D+\n");
            b_g = 1.50;
        }
    }
    if(b >= 60 && b <= 70){
        if(b >= 65){
            printf("Grade Chemical D\n");
            b_g = 1.00;
        }else{
            printf("Grade Chemical F\n");
            b_g = 0.00;
        }
    }

    //Bio Grade
    if(c >= 90 && c <= 100){
        if(c >= 95){
            printf("Grade Bio A\n");
            c_g = 4.00;
        }else{
            printf("Grade Bio B+\n");
            c_g = 3.50;
        }
    }
    if(c >= 80 && c <= 90){
        if(c >= 85){
            printf("Grade Bio B\n");
            c_g = 3.00;
        }else{
            printf("Grade Bio C+\n");
            c_g = 2.50;
        }
    }
    if(c >= 70 && c <= 80){
        if(c >= 75){
            printf("Grade Bio C\n");
            c_g = 2.00;
        }else{
            printf("Grade Bio D+\n");
            c_g = 1.50;
        }
    }
    if(c >= 60 && c <= 70){
        if(c >= 65){
            printf("Grade Bio D\n");
            c_g = 1.00;
        }else{
            printf("Grade Bio F\n");
            c_g = 0.00;
        }
    }

    //Physics Grade
    if(d >= 90 && d <= 100){
        if(d >= 95){
            printf("Grade Physics A\n");
            d_g = 4.00;
        }else{
            printf("Grade Physics B+\n");
            d_g = 3.50;
        }
    }
    if(d >= 80 && d <= 90){
        if(d >= 85){
            printf("Grade Physics B\n");
            d_g = 3.00;
        }else{
            printf("Grade Physics C+\n");
            d_g = 2.50;
        }
    }
    if(d >= 70 && d <= 80){
        if(d >= 75){
            printf("Grade Physics C\n");
            d_g = 2.00;
        }else{
            printf("Grade Physics D+\n");
            d_g = 1.50;
        }
    }
    if(d >= 60 && d <= 70){
        if(d >= 65){
            printf("Grade Physics D\n");
            d_g = 1.00;
        }else{
            printf("Grade Physics F\n");
            d_g = 0.00;
        }
    }

    //English Grade
    if(f >= 90 && f <= 100){
        if(f >= 95){
            printf("Grade English A\n");
            f_g = 4.00;
        }else{
            printf("Grade English B+\n");
            f_g = 3.50;
        }
    }
    if(f >= 80 && f <= 90){
        if(f >= 85){
            printf("Grade English B\n");
            f_g = 3.00;
        }else{
            printf("Grade English C+\n");
            f_g = 2.50;
        }
    }
    if(f >= 70 && f <= 80){
        if(f >= 75){
            printf("Grade English C\n");
            f_g = 2.00;
        }else{
            printf("Grade English D+\n");
            f_g = 1.50;
        }
    }
    if(f >= 60 && f <= 70){
        if(f >= 65){
            printf("Grade English D\n");
            f_g = 1.00;
        }else{
            printf("Grade English F\n");
            f_g = 0.00;
        }
    }

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
