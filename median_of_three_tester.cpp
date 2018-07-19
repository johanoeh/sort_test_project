/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   median_of_three_tester.cpp
 * Author: johan
 * 
 * Created on den 30 maj 2018, 04:46
 */

#include "median_of_three_tester.h"


double median_of_three_tester::run_test(){
    tester::t.start();
    median_sort(tester::a.begin(),tester::a.end());
    tester::t.stop();
    return tester::t.get_elapsed();   
}

median_of_three_tester::~median_of_three_tester() {
}

