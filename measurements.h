/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stats.h
 * Author: johan
 *
 * Created on den 31 maj 2018, 08:43
 */

#ifndef STATS_H
#define STATS_H
#include <vector>

class measurements {
    
public:
    measurements(unsigned int N);
    measurements(const measurements& orig);
    std::vector<double> & get_stats();
    void add_value(double);
    unsigned int getN();
    virtual ~measurements();
    
private:
    
    unsigned int N;
    std::vector<double> values;
};

#endif /* STATS_H */

