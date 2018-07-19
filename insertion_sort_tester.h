/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   insertion_sort_tester.h
 * Author: johan
 *
 * Created on den 31 maj 2018, 01:32
 */

#ifndef INSERTION_SORT_TESTER_H
#define INSERTION_SORT_TESTER_H

#include "tester.h"
class insertion_sort_tester : public tester{
public:
    insertion_sort_tester(unsigned int n, std::string order);
    double run_test();
private:

};

#endif /* INSERTION_SORT_TESTER_H */

