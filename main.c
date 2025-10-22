#include <stdio.h>
#include <stdlib.h>

void print_help() {
    printf("Usage:\n");
    printf("sumcli <first number> <second number>\n");
    printf("\n");
    printf("first number is the first number to sum\n");
    printf("second number is the second number to sum\n");
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Not enough arguments! You need to enter exactly two numbers\n");
        print_help();
        return 1;
    }
    if (argc > 3) {
        printf("Too much arguments! You need to enter exactly two numbers\n");
        print_help();
        return 1;
    }

    double first = atof(argv[1]);
    double second = atof(argv[2]);
    double sum = first + second;
    printf("The sum is %.2f\n", sum);

    return 0;
}
