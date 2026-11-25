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

    //Check score
    if(a < 0 || a > 100 ||
        b < 0 || b > 100 ||
        c < 0 || c > 100 ||
        d < 0 || d > 100 ||
        f < 0 || f > 100){
        printf("Error: Score must be between 0 and 100.\n");
        return 1;
    }

    //Check credit
    if(a_c < 0.0 || a_c > 2.0 ||
        b_c < 0.0 || b_c > 2.0 ||
        c_c < 0.0 || c_c > 2.0 ||
        d_c < 0.0 || d_c > 2.0 ||
        f_c < 0.0 || f_c > 2.0){
        printf("Error: Credit must be between 0.0 and 2.0.\n");
        return 1;
    }

    //process
    float a_g;//Math Grade
    float b_g;//Chemical Grade
    float c_g;//Bio Grade
    float d_g;//Physics Grade
    float f_g;//English Grade

    //total credit
    float total_credit = a_c + b_c + c_c + d_c + f_c;

    //Math grade
    if(a >= 80){
        a_g = 4.00;
        printf("Grade Math A\n");
    }else if(a >= 75){
        a_g = 3.50;
        printf("Grade Math B+\n");
    }else if(a >= 70){
        a_g = 3.00;
        printf("Grade Math B\n");
    }else if(a >= 65){
        a_g = 2.50;
        printf("Grade Math C+\n");
    }else if(a >= 60){
        a_g = 2.00;
        printf("Grade Math C\n");
    }else if(a >= 55){
        a_g = 1.50;
        printf("Grade Math D+\n");
    }else if(a >= 50){
        a_g = 1.00;
        printf("Grade Math D\n");
    }else{
        a_g = 0.00;
        printf("Grade Math F\n");
    }

    //Chemical grade
    if(b >= 80){
        b_g = 4.00;
        printf("Grade Chemical A\n");
    }else if(b >= 75){
        b_g = 3.50;
        printf("Grade Chemical B+\n");
    }else if(b >= 70){
        b_g = 3.00;
        printf("Grade Chemical B\n");
    }else if(b >= 65){
        b_g = 2.50;
        printf("Grade Chemical C+\n");
    }else if(b >= 60){
        b_g = 2.00;
        printf("Grade Chemical C\n");
    }else if(b >= 55){
        b_g = 1.50;
        printf("Grade Chemical D+\n");
    }else if(b >= 50){
        b_g = 1.00;
        printf("Grade Chemical D\n");
    }else{
        b_g = 0.00;
        printf("Grade Chemical F\n");
    }

    //Bio grade
    if(c >= 80){
        c_g = 4.00;
        printf("Grade Bio A\n");
    }else if(c >= 75){
        c_g = 3.50;
        printf("Grade Bio B+\n");
    }else if(c >= 70){
        c_g = 3.00;
        printf("Grade Bio B\n");
    }else if(c >= 65){
        c_g = 2.50;
        printf("Grade Bio C+\n");
    }else if(c >= 60){
        c_g = 2.00;
        printf("Grade Bio C\n");
    }else if(c >= 55){
        c_g = 1.50;
        printf("Grade Bio D+\n");
    }else if(c >= 50){
        c_g = 1.00;
        printf("Grade Bio D\n");
    }else{
        c_g = 0.00;
        printf("Grade Bio F\n");
    }

    //Physics grade
    if(d >= 80){
        d_g = 4.00;
        printf("Grade Physics A\n");
    }else if(d >= 75){
        d_g = 3.50;
        printf("Grade Physics B+\n");
    }else if(d >= 70){
        d_g = 3.00;
        printf("Grade Physics B\n");
    }else if(d >= 65){
        d_g = 2.50;
        printf("Grade Physics C+\n");
    }else if(d >= 60){
        d_g = 2.00;
        printf("Grade Physics C\n");
    }else if(d >= 55){
        d_g = 1.50;
        printf("Grade Physics D+\n");
    }else if(d >= 50){
        d_g = 1.00;
        printf("Grade Physics D\n");
    }else{
        d_g = 0.00;
        printf("Grade Physics F\n");
    }

    //English grade
    if(f >= 80){
        f_g = 4.00;
        printf("Grade English A\n");
    }else if(f >= 75){
        f_g = 3.50;
        printf("Grade English B+\n");
    }else if(f >= 70){
        f_g = 3.00;
        printf("Grade English B\n");
    }else if(f >= 65){
        f_g = 2.50;
        printf("Grade English C+\n");
    }else if(f >= 60){
        f_g = 2.00;
        printf("Grade English C\n");
    }else if(f >= 55){
        f_g = 1.50;
        printf("Grade English D+\n");
    }else if(f >= 50){
        f_g = 1.00;
        printf("Grade English D\n");
    }else{
        f_g = 0.00;
        printf("Grade English F\n");
    }

    //grade*credit Process
    float  Mgr = a_g*a_c;
    float  Cgr = b_g*b_c;
    float  Bgr = c_g*c_c;
    float  Pgr = d_g*d_c;
    float  Egr = f_g*f_c;

    float all_grade = Mgr + Cgr + Bgr + Pgr + Egr;

    //GPA process
    if(total_credit == 0){
        printf("Error: Total credit cannot be zero.\n");
        return 1;
    }

    float GPA = (all_grade)/total_credit;

    //output
    printf("----- Summary -----\n");
    printf("Grade Math = %.2f\n",a_g);
    printf("Grade Chemical = %.2f\n",b_g);
    printf("Grade Bio = %.2f\n",c_g);
    printf("Grade Physics = %.2f\n",d_g);
    printf("Grade English = %.2f\n",f_g);
    printf("All Grade = %.2f\n",all_grade);
    printf("GPA = %.2f\n",GPA);

    return 0;
}
