/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   median_of_three_tester.h
 * Author: johan
 *
 * Created on den 30 maj 2018, 04:46
 */

#ifndef MEDIAN_OF_THREE_TESTER_H
#define MEDIAN_OF_THREE_TESTER_H
#include "tester.h"

class median_of_three_tester : public tester {
public:
    median_of_three_tester(unsigned int n, std::string order) : tester(n,order){}
    double run_test();
    median_of_three_tester(const median_of_three_tester& orig);
    virtual ~median_of_three_tester();
private:

};

#endif /* MEDIAN_OF_THREE_TESTER_H */

