#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int nextPrime(int start) {
    if (start < 2) return 2;
    if (start < 3) return 3;
    if (start < 5) return 5;

    int k = (start + 2) / 6;
    while (true) {
        int c1 = 6 * k - 1;
        int c2 = 6 * k + 1;
        if (c1 > start && isPrime(c1)) return c1;
        if (c2 > start && isPrime(c2)) return c2;
        ++k;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The next prime number after " << n << " is " << nextPrime(n) << "." << std::endl;
    return 0;
}
