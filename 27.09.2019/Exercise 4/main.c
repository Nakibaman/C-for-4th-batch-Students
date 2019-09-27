#include <stdio.h>
#include <stdlib.h>
float gp_cal(int marks)
{
    if(marks>=80)
        return 5.00;
    else if(marks>=70)
        return 4.50;
    else if(marks>=60)
        return 4.00;
    else if(marks>=50)
        return 3.50;
    else if(marks>=33)
        return 3.00;
    else
        return 0.00;
}
char gl_cal(int marks)
{
    if(marks>=80)
        return 'A';
    else if(marks>=70)
        return 'B';
    else if(marks>=60)
        return 'C';
    else if(marks>=50)
        return 'D';
    else if(marks>=33)
        return 'E';
    else
        return 'F';
}

void print_result(float a,char b)
{
    printf("Grade point = %.2f\n",a);
    printf("Grade Letter = %c\n",b);
}
float avg_marks(float ban,float eng,float mat,float sci,float agr)
{
    float avg;
    avg=(ban+eng+mat+sci+agr)/5.00;
    return avg;
}
int main()
{
    float c;
    c=avg_marks(56,78,62,73,90);
    print_result(gp_cal(c),gl_cal(c));
    c=avg_marks(34,80,92,73,90);
    print_result(gp_cal(c),gl_cal(c));
    c=avg_marks(56,78,92,93,90);
    print_result(gp_cal(c),gl_cal(c));
    c=avg_marks(16,98,62,63,90);
    print_result(gp_cal(c),gl_cal(c));
    c=avg_marks(36,78,22,43,90);
    print_result(gp_cal(c),gl_cal(c));
    return 0;
}
