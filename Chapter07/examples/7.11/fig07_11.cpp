/*
 * =====================================================================================
 *
 *       Filename:  fig07_11.cpp
 *
 *    Description:  Fig. 7.11: Poll Analysis Program
 *
 *        Version:  1.0
 *        Created:  19/04/16 11:51:41
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    const int responseSize = 20;
    const int frequencySize = 6;

    // place survey responses in array responses
    const int responses[responseSize] = {1, 2, 5, 4, 3, 5, 2, 1, 3, 1,
                                         4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    // initialise frequency counters to 0
    int frequency[frequencySize] = {};

    for (int answer = 0; answer < responseSize; ++answer) {
        ++frequency[responses[answer]];
    }

    std::cout << "Rating" << std::setw(17) << "Frequency" << std::endl;

    for (int rating = 1; rating < frequencySize; ++rating) {
        std::cout << std::setw(6) << rating << std::setw(17)
                  << frequency[rating] << std::endl;
    }

    return 0;
}
