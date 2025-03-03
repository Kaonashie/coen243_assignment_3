#include <iostream>

int digitalRoot(int n);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The digital root of " << num << " is " << digitalRoot(num) << std::endl;
    return 0;
}

int digitalRoot(int n) {
    if (n < 10) {
        return n;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return digitalRoot(sum);
}
