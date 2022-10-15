// IsPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> get_factors(int u) {
    std::vector<int> factors;

    for (int i = 2; i < u; i++) {
        if (u % i == 0) { // u % i is the remainder after u / i
            factors.push_back(i);
        }
    }

    return factors;
}

bool is_prime(int u) {
    bool isPrime = false;

    std::vector<int> factors = get_factors(u);

    // Check that the factors contains no elements
    if (factors.size() == 0) {
        isPrime = true;
    }
    else {
        std::cout << u << " is not prime. It contains factors other than itself and 1.\n";
        std::cout << "Factors of " << u << ":\n";
        for (int i = 0; i < factors.size(); i++) {
            std::cout << factors[i] << " , ";
        }
    }

    return isPrime;
}

int main()
{
    std::cout << "IsPrime\n";

    bool loop = true;
    do {
        std::cout << "\nEnter number: ";
        int x;
        std::cin >> x;
        bool isPrime = is_prime(x);
        if (isPrime) std::cout << x << " is prime.\n";

        std::cout << "\nAgain? ";
        char response;
        std::cin >> response;
        if (response != 'y') loop = false;
    } while (loop);

    return 0;
}
