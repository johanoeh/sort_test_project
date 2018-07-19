/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   helper.cpp
 * Author: johan
 * 
 * Created on den 20 juni 2018, 11:06
 */

#include "helper.h"

/*strings for order of elements*/
const std::string helper::ASCENDING = "ascending";
const std::string helper::DESCENDING = "descending";
const std::string helper::RANDOM = "random";
const std::string helper::SAME_VALUE = "samevalue";

/*strings for sorting algorithms*/
const std::string helper::QUICK_SORT = "quicksort";
const std::string helper::MEDIAN_SORT = "mediansort";
const std::string helper::INSERTION_SORT = "insertionsort";
const std::string helper::SELECTION_SORT = "selectionsort";
const std::string helper::STD_SORT = "stdsort";

void helper::print(){std::cout<<"hello world"<<std::endl;}