/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sort_project_tester.h
 * Author: johan
 *
 * Created on den 20 juni 2018, 08:59
 */

#ifndef SORT_PROJECT_TESTER_H
#define SORT_PROJECT_TESTER_H

#include "test_manager.h"
#include <string>
#include <vector>
#include <memory>
#include "sorting.h"


class sort_project_tester {
    
public:
    
    
    sort_project_tester();
    void run_test();
    sort_project_tester(const sort_project_tester& orig);
    virtual ~sort_project_tester();
    
private:
    
    test_manager manager;
    tester_factory t_factory;
    std::vector<std::string> algorithms =  {"insertionsort", "mediansort","selectionsort","quicksort","stdsort"};
    std::vector<std::string> order = {"ascending","descending","random" ,"samevalue"};
    

};

#endif /* SORT_PROJECT_TESTER_H */

