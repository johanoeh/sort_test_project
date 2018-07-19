/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   test_prop.cpp
 * Author: johan
 * 
 * Created on den 9 maj 2018, 20:25
 */

#include "test_prop.h"

test_prop::test_prop(

            std::string algorithm_name, 
            unsigned int replications, 
            unsigned int increment,
            unsigned int start_n, 
            unsigned int stop_n, 
            std::string order
            ){
    
    this->algorithm_name=algorithm_name;
    this->replications= replications;
    this->increment = increment;
    this->start_n = start_n;
    this->stop_n = stop_n;
    this->order= order;
}
test_prop::test_prop(const test_prop& orig) {
}

test_prop::~test_prop() {
}

void test_prop::set_order(std::string order) {
    this->order = order;
}

std::string test_prop::get_order() const {
    return order;
}

void test_prop::set_stop_n(unsigned int stop_n) {
    this->stop_n = stop_n;
}

unsigned int test_prop::get_stop_n() const {
    return stop_n;
}

void test_prop::set_start_n(unsigned int start_n) {
    this->start_n = start_n;
}

unsigned int test_prop::get_start_n() const {
    return start_n;
}

void test_prop::set_increment(unsigned int increment) {
    this->increment = increment;
}

unsigned int test_prop::get_increment() const {
    return increment;
}

void test_prop::set_replications(unsigned int replications) {
    this->replications = replications;
}

unsigned int test_prop::get_replications() const {
    return replications;
}

void test_prop::set_algorithm_name(std::string algorithm_name) {
    this->algorithm_name = algorithm_name;
}

std::string test_prop::get_algorithm_name() const {
    return algorithm_name;
}

