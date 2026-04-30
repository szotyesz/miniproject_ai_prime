#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int nextPrime(int start) {
    int num = start + 1;
    while (!isPrime(num)) {
        ++num;
    }
    return num;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The next prime number after " << n << " is " << nextPrime(n) << "." << std::endl;
    return 0;
}
