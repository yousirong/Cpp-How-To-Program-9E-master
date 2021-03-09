/*
 * =====================================================================================
 *
 *       Filename:  ex_628.cpp
 *
 *    Description:  Exercise 6.28 - Perfect Numbers
 *
 *        Version:  1.0
 *        Created:  14/04/16 18:30:46
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

bool isPerfect(long);

int main(int argc, const char *argv[]) {
    std::cout << "Program to test whether a number is perfect or not\n"
              << std::endl;

    std::cout << "Perfect number between 1 and 100: " << std::endl;
    for (long i = 1; i <= 100000000000; i++) {
        // print perfect numbers
        if (isPerfect(i)) {
            std::cout << i << ":"
                      << "\t";
            // print divisors
            for (long d = 1; d < i; d++) {
                if (i % d == 0) { std::cout << d << " "; }
            }
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}
// checks whether n is a perfect number
bool isPerfect(long n) {
    long sum = 0;

    // sum all divisors up to n/2
    for (long i = 1; i <= n / 2; i++) {
        if (n % i == 0) { sum += i; }
    }

    return sum == n;
}
