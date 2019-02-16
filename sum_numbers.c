#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float x, y;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);

    int sum_nm = n + m;
    int diff_nm = n - m;
    float sum_xy = x + y;
    float diff_xy = x - y;

    printf("%d %d\n%.1f %.1f", sum_nm, diff_nm, sum_xy, diff_xy); 

    return 0;
}


