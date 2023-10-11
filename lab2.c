#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0, y;
    double mat;
    double h;
    scanf("%lf", &h);
    mat = h / 2.0;
    printf("x\t\ty\n");
do 
{
    if(x <= 1.0 + mat)
          y = 8 * pow(x, 3) * cos(x);
        else
          y = log(1 + sqrt(x)) - cos(x);
        printf("%f\t%f\n", x, y);
        x = x + h;
} while(x >= 0.0 && x <= 2.0 + mat);
  return 0;
}