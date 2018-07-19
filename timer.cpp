/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   timer.cpp
 * Author: johan
 * 
 * Created on den 30 maj 2018, 15:25
 */

#include "timer.h"


timer::timer(){
}

void timer::start(){
    start_t = std::chrono::system_clock::now();
}

void timer::stop(){
    stop_t = std::chrono::system_clock::now();
}

double timer::get_elapsed(){
    std::chrono::duration<double> elapsed = stop_t - start_t;
    return elapsed.count();
}
