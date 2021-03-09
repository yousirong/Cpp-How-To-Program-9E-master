/*
 * =====================================================================================
 *
 *       Filename:  ex_735.cpp
 *
 *    Description:  Exercise 7.35 - Print an Array
 *
 *        Version:  1.0
 *        Created:  26/04/16 14:08:26
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>

void printArray(const int[], int, int);

static const int LIMIT = 20;

int main(int argc, const char *argv[]) {
    std::cout << "Program to recursively print an array" << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);

    int n[LIMIT];

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = dis(gen);
    }

    printArray(n, 0, LIMIT);

    return 0;
}
// recursively print an array
void printArray(const int n[], int start, int end) {
    if (start >= end) { return; }

    std::cout << n[start] << std::endl;

    printArray(n, ++start, end);
}
