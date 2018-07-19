/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   std_sort_tester.cpp
 * Author: johan
 * 
 * Created on den 19 juni 2018, 23:45
 */

#include "std_sort_tester.h"


double std_sort_tester::run_test(){
    tester::t.start();
    std::sort(tester::a.begin(),tester::a.end());
    tester::t.stop();
    return t.get_elapsed();   
}
