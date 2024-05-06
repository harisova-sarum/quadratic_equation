#include <math.h>

int solve_equation(double a, double b, double c, double *x1, double *x2) {
    double discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        *x1 = (-b + sqrt(discriminant)) / (2*a);
        *x2 = (-b - sqrt(discriminant)) / (2*a);
        return 2; // Два корня
    } else if (discriminant == 0) {
        *x1 = -b / (2*a);
        *x2 = *x1;
        return 1; // Один корень
    } else {
        return 0; // Нет действительных корней
    }
}