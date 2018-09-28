//
// Created by Christian J. ROSAS on 9/26/18.
//

#include "windchillindex.h"
#include <iostream>
#include <cmath>

using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]) {
    double temp; //Temperature in Celsius above values of 10
    double velocity; //windspeed in m/sec
    double windChillIndex; // results from intial wind chill index in degrees Celsius


    std::cout << " What was the temperature in Celsius?   ";
    std::cin  >> temp ;
    std::cout << "What was the wind speed ?  ";
    std::cin  >>  velocity;

    windChillIndex = computeWindChillIndex(temp, velocity);

    std::cout << "The wind index is " << windChillIndex;

    return 0;
}
