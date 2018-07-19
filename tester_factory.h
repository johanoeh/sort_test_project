/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tester_factory.h
 * Author: johan
 *
 * Created on den 9 maj 2018, 20:42
 */

#ifndef TESTER_FACTORY_H
#define TESTER_FACTORY_H

#include "tester.h"
#include "utils.h"
#include "test_factory_interface.h"
#include <string>

class tester_factory: public  test_factory_interface {
    
public:
    std::shared_ptr<tester>  get_tester(unsigned int N, std::string algorithm_name, std::string order);
private:

};


#endif /* TESTER_FACTORY_H */

