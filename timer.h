/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   timer.h
 * Author: johan
 *
 * Created on den 30 maj 2018, 15:25
 */

#ifndef TIMER_H
#define TIMER_H
#include <chrono>
#include <ctime>

class timer {
public:
    timer();
    void start();
    void stop();
    double get_elapsed();
    
private:
   std::chrono::time_point<std::chrono::system_clock>  start_t, stop_t;
 
};

#endif /* TIMER_H */

