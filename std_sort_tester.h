/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   std_sort_tester.h
 * Author: johan
 *
 * Created on den 19 juni 2018, 23:45
 */

#ifndef STD_SORT_TESTER_H
#define STD_SORT_TESTER_H
#include "tester.h"
#include <algorithm>

class std_sort_tester : public tester{
    public:
        std_sort_tester(unsigned int n, std::string order) : tester(n,order){};
        double run_test();
    private:
};

#endif /* STD_SORT_TESTER_H */

