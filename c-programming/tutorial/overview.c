#include <stdio.h>
// This is a Macro
#define PI 3.14159
// Global variable declaration
int global_variable;
// Global function declaration
void sample_function();

int main(){
    float radius = 5.0;
    double area =  (double) PI * radius * radius;
    printf("Area of the circle is: %lf\n", area);

    global_variable = 5;
    printf("global_variable value: %d\n", global_variable);

    sample_function();

    return 0;
}

// Global function definition
void sample_function(){
    printf("Something inside sample_function\n");
}
