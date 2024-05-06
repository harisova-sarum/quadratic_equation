#include <stdio.h>
#include "quadratic_equation.h"

int main() {
    double a = 1, b = -3, c = 2;
    double x1, x2;

    int num_roots = solve_equation(a, b, c, &x1, &x2);

    if (num_roots == 2) {
        printf("Уравнение имеет два корня: x1 = %lf, x2 = %lf\n", x1, x2);
    } else if (num_roots == 1) {
        printf("Уравнение имеет один корень: x = %lf\n", x1);
    } else {
        printf("Уравнение не имеет действительных корней\n");
    }

    return 0;
}