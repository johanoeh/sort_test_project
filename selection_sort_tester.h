/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   selection_sort_tester.h
 * Author: johan
 *
 * Created on den 31 maj 2018, 02:09
 */

#ifndef SELECTION_SORT_TESTER_H
#define SELECTION_SORT_TESTER_H

#include "tester.h"


class selection_sort_tester : public tester {
public:
    selection_sort_tester(unsigned int n, std::string order);
    double run_test();
private:

};

#endif /* SELECTION_SORT_TESTER_H */

