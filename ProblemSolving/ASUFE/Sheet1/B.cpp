#include <iostream>
using namespace std;
int main(void)
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%.9lf\n", a, b, c, d, e);
}