#include <stdio.h>
#include <math.h>

#define PI acos(-1.0)

int main()
{
    double x, ret, val;

    x = 60.0;
    val = PI / 180.0;
    ret = cos(x*val);
    printf("The cosine of %lf is %lf degrees\n", x, ret);

    return 0;
}
