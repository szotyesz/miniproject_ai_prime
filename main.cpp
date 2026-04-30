#include <algorithm>
#include <iostream>
#include <string>

typedef __uint128_t u128;

std::string toString(u128 n) {
    if (n == 0) return "0";
    std::string result;
    while (n > 0) {
        result += char('0' + (n % 10));
        n /= 10;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

u128 fromString(const std::string& s) {
    u128 result = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            result = result * 10 + (c - '0');
        }
    }
    return result;
}

bool isPrime(u128 n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (u128 i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

u128 nextPrime(u128 start) {
    if (start < 2) return 2;
    if (start < 3) return 3;
    if (start < 5) return 5;

    u128 k = (start + 2) / 6;
    while (true) {
        u128 c1 = 6 * k - 1;
        u128 c2 = 6 * k + 1;
        if (c1 > start && isPrime(c1)) return c1;
        if (c2 > start && isPrime(c2)) return c2;
        ++k;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    u128 n = fromString(input);
    std::cout << "The next prime number after " << toString(n)
              << " is " << toString(nextPrime(n)) << "." << std::endl;
    return 0;
}