/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quicksort_tester.cpp
 * Author: johan
 * 
 * Created on den 8 maj 2018, 17:32
 */
#include "quicksort_tester.h"
#include "tester.h"
#include "sorting.h"
double quicksort_tester::run_test(){
    tester::t.start();
    quick_sort(tester::a.begin(),tester::a.end());
    tester::t.stop();
    return t.get_elapsed();   
}

quicksort_tester::~quicksort_tester() {
}

