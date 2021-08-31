#include <stdio.h>

int main() {
    double I, P = 10000, r = 35, n = 5, I_plus_P, monthly_ins;

    r = r/100;

    I = P * r * n;s
    I_plus_P = I + P;
    monthly_ins = I_plus_P / (12*5);

    printf("Profit + Interest = %.2lf\nMonthly Installemnt: %.2lf\n", I_plus_P, monthly_ins);

    return 0;
}
