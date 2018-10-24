#include <iostream>
#include <iomanip>
#include <cmath>

const double PI = std::atan(1.000000000)*4;
int main()
{
    int z;
    std::cin>>z;
    double r1, r2;
    double r3;
    double p1, p2, p3, p4;
    double h;
    double alpha, beta;
    while(z--){
        std::cin >> r1 >> r2;
        p1 = (PI * r1 * r1)/2;
        p2 = (PI * r2 * r2)/2;
        r1 *= 2;
        r2 *= 2;
        r3 = (r1 * r1 + r2 * r2);

        h = r3 - ((r1 / 2)* (r1/2));
        h = sqrt(h);
        alpha = sin(h/sqrt(r3));
        beta = 180 - 2 * alpha;
        p3 = (beta/360) * PI * r3;
        p3 -= ((r1/2) * h) / 2;
        p2 -= p3;

        h = r3 - ((r2 / 2)* (r2/2));
        h = sqrt(h);
        alpha = sin(h/sqrt(r3));
        beta = 180 - 2 * alpha;
        p4 = (beta/360) * PI * r3;
        p4 -= ((r2/2) * h) / 2;
        p1 -= p4;

        std::cout << std::fixed << std::setprecision(2) << p1 + p2 << std::endl;
    }
    return 0;
}
