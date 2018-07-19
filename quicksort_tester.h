/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quicksort_tester.h
 * Author: johan
 *
 * Created on den 8 maj 2018, 17:32
 */

#ifndef QUICKSORT_TESTER_H
#define QUICKSORT_TESTER_H
#include "sorting.h"
#include "tester.h"

class quicksort_tester : public tester {
public:
    quicksort_tester(unsigned int n, std::string order) : tester(n,order){}
    double run_test();
    virtual ~quicksort_tester();
private:

};

#endif /* QUICKSORT_TESTER_H */

