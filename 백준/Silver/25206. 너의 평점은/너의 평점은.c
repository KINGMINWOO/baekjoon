#include <stdio.h>
#include <string.h>

int main()

{
    char subject[51];
    double total;
    char grade[3];

    double sum_total = 0;
    double sum_grade = 0;
    int N = 20;

    for (int i = 0; i < N; i++) {
        scanf("%s %lf %s", subject, &total, grade);
       // printf("%s %lf %s\n", subject, total, grade);
        if (strcmp(grade, "P") != 0) {
            sum_total += total;
            if (strcmp(grade, "A+") == 0) sum_grade += (total * 4.5); 
            else if (strcmp(grade, "A0") == 0) sum_grade += (total * 4.0); 
            else if (strcmp(grade, "B+") == 0)  sum_grade += (total * 3.5); 
            else if (strcmp(grade, "B0") == 0)  sum_grade += (total * 3.0); 
            else if (strcmp(grade, "C+") == 0)  sum_grade += (total * 2.5); 
            else if (strcmp(grade, "C0") == 0)  sum_grade += (total * 2.0); 
            else if (strcmp(grade, "D+") == 0)  sum_grade += (total * 1.5); 
            else if (strcmp(grade, "D0") == 0)  sum_grade += (total * 1.0); 
            else if (strcmp(grade, "F") == 0)  sum_grade += (total * 0.0); 
        }
        //if (strcmp(grade, "P") == 0) printf("grade = P\n");
    }
    double p = sum_grade / sum_total;
    printf("%lf", p);

    return 0;
}