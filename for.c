#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0, y;
    double eps;
    double h;
    scanf("%lf", &h);
    eps = h / 2.0;
    printf("x\t\ty\n");
    for(x = 0.0; x <= 2.0 + eps; x = x + h)
    {
        if(x <= 1.0 + eps)
          y = 8 * pow(x, 3) * cos(x);
        else
          y = log(1 + sqrt(x)) - cos(x);
        printf("%f\t%f\n", x, y);
    }
    return 0;
}