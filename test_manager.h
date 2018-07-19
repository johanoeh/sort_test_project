/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   test_manager.h
 * Author: johan
 *
 * Created on den 31 maj 2018, 03:27
 */

#ifndef TEST_MANAGER_H
#define TEST_MANAGER_H

#include "test_prop.h"
#include "tester_factory.h"
#include "measurements.h"
#include <memory>
#include "statistics.h"


class test_manager {
    
public:
    test_manager();
    test_manager(const test_manager& orig);
    std::vector<std::shared_ptr<statistics> > run_test(test_prop & prop);
    std::vector<std::shared_ptr<measurements>>  get_stats();
    virtual ~test_manager();
    
private:
    
    tester_factory factory;
    

};

#endif /* TEST_MANAGER_H */

