/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tester_interface.h
 * Author: johan
 *
 * Created on den 19 juni 2018, 09:18
 */

#ifndef TESTER_INTERFACE_H
#define TESTER_INTERFACE_H

class tester_interface {
public:
    virtual double run_test(void) = 0;
private:
};

#endif /* TESTER_INTERFACE_H */

