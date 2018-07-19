/* 
 * File:   utils.cpp
 * Author: johan öh
 * 
 * implementation of utility functions for program
 * populates container or prints container
 * 
 * Created on den 7 maj 2018, 23:38
 */

#include "utils.h"
#include "helper.h"
#include <iostream>

/**
 * Fills container.. with integers 0-n (l to r iterator) 
 * in the given order or with the samevalue
 * @param l left iterator or pointer
 * @param r right iterator or pointer
 * @param order the order of the elements 
 */
template<class T>
void fill(T  l, T  r, std::string order){
    
    T it_l = l;
    T it_r = r-1;
    
    if(order.compare(helper::DESCENDING)== 0){
        for(int i = 0; it_r >= l; i++ , it_r--){ *it_r = i;};
    }else if(order.compare(helper::SAME_VALUE)== 0){
        for(int i =0; it_l!=r; i++,it_l++){ *it_l =  666;}
    }else if(order.compare(helper::ASCENDING)== 0){
        for(int i =0; it_l!=r; i++,it_l++){ *it_l = i;}
    }else if(order.compare(helper::RANDOM)== 0){
        for(int i =0; it_l!=r; i++,it_l++){ *it_l = i;}
        srand(time(NULL));
        std::random_shuffle(l,r);
    }
}
/**
 * 
 * @param l
 * @param r
 */
template<class T>
void print(T  l, T r){
    std::cout<<"{";
    for(; l!=r; l++){
        std::cout<<*l;
        if(l!=r-1){std::cout <<",";}
    }   
    std::cout<<"}";
}
