/*
 * =====================================================================================
 *
 *       Filename:  ex_737.cpp
 *
 *    Description:  Exercise 7.37 - Find the Minimum Value in an Array
 *
 *        Version:  1.1
 *        Created:  26/04/16 14:33:30
 *       Revision:  12/02/18 04:34:06
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>

int recursiveMinimum(const int[], int, int);

static const int LIMIT = 10;

int main(int argc, const char *argv[]) {
    std::cout << "Program to recursively find mimimum value in an array\n"
              << std::endl;

    int n[LIMIT];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, LIMIT);

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = dis(gen);

        std::cout << n[i] << std::endl;
    }

    std::cout << "\nMinimum : " << recursiveMinimum(n, 0, LIMIT - 1)
              << std::endl;

    return 0;
}
/*
 * Recursively finds the minimum value from the given array.
 * @param const int[]
 * @param int
 * @param int
 * @return int
 */
int recursiveMinimum(const int n[], int start, int end) {
    if (start == end) { return n[start]; }

    int min = recursiveMinimum(n, ++start, end);

    return (min < n[start]) ? min : n[start];
}
