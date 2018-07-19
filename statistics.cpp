
#include <stdlib.h>

#include "statistics.h"

statistics::statistics() {
    this->mean_value = 0.0;
    this->std_deviation = 0.0;
    this->n = 0;
}
statistics::statistics( 
                        double std_deviation,
                        double mean_value, 
                        unsigned int n,
                        unsigned int replications,
                        std::string algorithm_name) {
    
    this->std_deviation = std_deviation;
    this->mean_value = mean_value;
    this->n = n;
    this->replications = replications;
    this->algorithm_name = algorithm_name;
}

void statistics::set_std_deviation(double std_deviation){ 
    this->std_deviation = std_deviation;
}

double statistics::get_std_deviation() {
    return std_deviation;
}


double statistics::get_mean_value() {
    return mean_value;
}

void statistics::set_mean_value(double mean_value) {
    this->mean_value=mean_value;
}


void statistics::set_n(unsigned int n){
    this->n=n;
}

unsigned int statistics::get_n(){ return n;
}

void statistics::set_replications(unsigned int) {
    this->replications = replications;
}

unsigned int statistics::get_replications() {
    return replications;
}

void statistics::set_algorithm_name(std::string algorithm_name) {
    this->algorithm_name = algorithm_name;
}

std::string statistics::get_algorithm_name() {
    return algorithm_name;
}


statistics::statistics(const statistics& orig) {
    if(this == &orig) return;
    this->mean_value=orig.mean_value;
    this->std_deviation = orig.std_deviation;
    this->n = orig.n;
    this->replications = orig.replications;
    this->algorithm_name = orig.algorithm_name;
}


std::ostream & operator << (std::ostream &out, statistics & stats){
    out << stats.n <<"\t"<< stats.replications<<"\t"<< stats.mean_value <<"\t"<< stats.std_deviation <<"\t"<< std::endl;
    return out;
}

statistics::~statistics() {
}

