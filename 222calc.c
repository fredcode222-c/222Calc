#include <stdio.h>
#include <math.h>

// calculator app for terminal
// made by fredcode222

int main(void) {
    
    double num1;
    double num2;
    double output;
    char input;

    while(1) {
        if (scanf("%lf %c %lf", &num1, &input, &num2) != 3) {
            printf("Error: Invalid operator.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if(input == '+') {
            output = num1 + num2;
            printf("\t%lf\n", output);
        } else if(input == '-') {
            output = num1 - num2;
            printf("\t%lf\n", output);
        } else if(input == '*') {
            output = num1 * num2;
            printf("\t%lf\n", output);
        } else if(input == '/') {
            if (num2 != 0) {
                output = num1 / num2;
                printf("\t%lf\n", output);
            } else {
                printf("Error: cannot divide by 0.\n");
            }
        } else if(input == '^') {
            output = pow(num1, num2);
            printf("\t%lf\n", output);
        } else {
            printf("Error: Invalid operator.\n");
        }
    }
    return 0;
}
