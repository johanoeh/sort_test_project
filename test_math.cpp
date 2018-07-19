
/* 
 * File:   test_math.cpp
 * Author: johan
 * 
 * Created on den 11 juni 2018, 08:28
 */

#include "test_math.h"
#include "measurements.h"
#include "statistics.h"

double std_dev(measurements m_stats, double mean) {
    double sum = 0.0;
    for (auto elem : m_stats.get_stats()) {
        sum += std::pow((elem - mean), 2.0);
    }
    return std::sqrt(sum / m_stats.getN());
}

double mean_value(measurements m_stats) {
    double sum = 0.0;
    for (auto elem : m_stats.get_stats()) {
        sum += elem;
    }
    return (sum / m_stats.getN());
}

