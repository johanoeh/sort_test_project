/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sort_test_factory_interface.h
 * Author: johan
 *
 * Created on den 30 maj 2018, 02:35
 */

#ifndef SORT_TEST_FACTORY_INTERFACE_H
#define SORT_TEST_FACTORY_INTERFACE_H
#include "tester.h"
#include <memory>

class test_factory_interface {
public:
    virtual std::shared_ptr<tester>  get_tester(unsigned int N, std::string algorithm_name, std::string order) = 0;
private:

};

#endif /* SORT_TEST_FACTORY_INTERFACE_H */

