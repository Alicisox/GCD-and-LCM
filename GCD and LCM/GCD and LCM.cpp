
#include <iostream>

/// <summary>
/// Compute the greatest common divisor by given m and n numbers.
/// </summary>
/// <param>
/// <c>m</c> is the first number.
/// <c>n</c> is the second number.
/// </param>
/// <returns>
/// The long long the greatest common divisor number.
/// </returns>
static long long Pair_GCD(int m, int n) {
    long long fraction = m;
    long long denom = n;
    int tmp = 0;
    while (fraction >= denom) {
        tmp = denom;
        denom = fraction % denom;
        fraction = tmp;
        if (denom == 0) return tmp;
    }
    return 1;
}

/// <summary>
/// Compute the least common multiple by given m and n numbers.
/// </summary>
/// <param>
/// <c>m</c> is the first number.
/// <c>n</c> is the second number.
/// </param>
/// <returns>
/// The long long the least common multiple number.
/// </returns>
static long long Pair_LCM(long long m, long long n) {
    return (m * n) / Pair_GCD(m, n);
}

int main()
{
    std::cout << Pair_LCM(761457, 614573) << "\n";
}
