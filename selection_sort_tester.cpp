/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   selection_sort_tester.cpp
 * Author: johan
 * 
 * Created on den 31 maj 2018, 02:09
 */

#include "selection_sort_tester.h"

selection_sort_tester::selection_sort_tester(unsigned int n, std::string order): tester(n,order){
}
double selection_sort_tester::run_test(){
    tester::t.start();
    selection_sort(tester::a.begin(),tester::a.end());
    tester::t.stop();
    return tester::t.get_elapsed();   
}


