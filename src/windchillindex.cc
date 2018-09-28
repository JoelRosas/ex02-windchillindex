//
// Created by Christian J. ROSAS on 9/26/18.
//

#include <cmath>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    double computeWindChillIndex(double temp, double velocity) {
        if (temp >= 10){
            return -1;
        }
        double windChillIndex = 33 - (10 * (sqrt(velocity)) - velocity + 10.5) * (33 - temp) / 23.1;
        return windChillIndex;
    }
}}}}



