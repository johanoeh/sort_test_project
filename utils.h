/* 
 * File:   utils.h
 * Author: johan
 * contains functions used to fill container and print container
 * Created on den 7 maj 2018, 23:38
 */

#ifndef UTILS_H
#define UTILS_H
#include <algorithm>
#include <iostream>
#include <string>

template<class T>
void fill(T l, T  r, std::string order);

template<class T>
void print(T * l, T * r);

template<class T>
void print(T  l, T r);

#endif /* UTILS_H */

