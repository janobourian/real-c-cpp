#include <stdio.h>

int main(){
    int variable = 5;
    char my_long_text[]= "This is a long text";
    printf("The curren value is: %d\n", variable);
    printf("And here are some other variables like float: %f\n", 5.99);
    printf("Or characters like: %c\n", 'A');
    printf("Sometimes we need double like: %.9lf\n", 37.73);
    printf("And also in-line string like: %s\n", "Hello, my friend");
    printf("Or a string using variables like: %s\n", my_long_text);
    // Now is time to talk about sizes
    float number = 19.001;
    double value = 19.000;
    printf("The size of a float number is: %lu\n", sizeof(number));
    printf("The size of a double number is: %lu\n", sizeof(value));
    printf("The size of a string is: %lu\n", sizeof(my_long_text));
    // Now is time to talk about explicit convertion
    double divided_by_result = (double) 5/2;
    printf("The value is %lf and the size is %lu.\n", divided_by_result, sizeof(divided_by_result)); 
    // Information about constants
    const int BIRTHYEAR = 1990;
    printf("This is a constant: %d\n", BIRTHYEAR);
    return 0;
}
