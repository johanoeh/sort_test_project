/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   insertion_sort_tester.cpp
 * Author: johan
 * 777*210#
 * Created on den 31 maj 2018, 01:32
 */

#include "insertion_sort_tester.h"

insertion_sort_tester::insertion_sort_tester(unsigned int n, std::string order): 
tester(n, order) {}

double insertion_sort_tester::run_test(){
    tester::t.start();
    insertion_sort(tester::a.begin(),tester::a.end());
    tester::t.stop();
    return tester::t.get_elapsed();   
}

