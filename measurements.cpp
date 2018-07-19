/* 
 * File:   stats.cpp
 * Author: johan
 * 
 * Created on den 31 maj 2018, 08:43
 */

#include <vector>

#include "measurements.h"

measurements::measurements(unsigned int N){
    this->N=N;
}
void measurements::add_value(double value){
    values.push_back(value);
}

measurements::measurements(const measurements & orig) {
    if(this == &orig) return;
    this->N = orig.N;
    for (auto elem : orig.values) {
        this->values.push_back(elem);
    }
}

std::vector<double> & measurements::get_stats(){
    return values;
}
unsigned int measurements::getN(){ return N;}
measurements::~measurements() {
}

