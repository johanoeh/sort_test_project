/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sort_tester.cpp
 * Author: johan
 * 
 * Created on den 7 maj 2018, 23:35
 */

#include "tester.h"
tester::tester(unsigned int n, std::string order): N(n), order(order){
    a.resize(n);
    fill(a.begin(),a.end(),order);
}

std::vector<int> tester::get_elements(){ return a;}
tester::~tester() {
}

