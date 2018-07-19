/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   helper.h
 * Author: johan
 *
 * Created on den 20 juni 2018, 11:06
 */

#ifndef HELPER_H
#define HELPER_H
#include <string>
#include<iostream>

class helper {
    
public:
    /* strings for order of elements*/
    static const std::string DESCENDING;
    static const std::string ASCENDING;
    static const std::string RANDOM;
    static const std:: string SAME_VALUE;
    
    /*strings for sorting algorithm*/
    
    static const std::string QUICK_SORT;
    static const std::string MEDIAN_SORT;
    static const std::string INSERTION_SORT;
    static const std::string SELECTION_SORT;
    static const std::string STD_SORT;
    
    static void print();

};

#endif /* HELPER_H */

