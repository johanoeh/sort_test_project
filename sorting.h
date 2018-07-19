/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sorting.h
 * Author: johan
 *
 * Created on den 8 maj 2018, 14:50
 */

#ifndef SORTING_H
#define SORTING_H
#include <algorithm>

template<class T>
T partition(T  l, T  r);

template <class T>
void quick_sort(T  l, T  r);

template <class T>
inline void medianmize(T l, T r);

template <class T>
void median_sort(T l, T r);

template<class T>
void insertion_sort(T l, T r);

template<class T>
void selection_sort(T l, T r);

#endif /* SORTING_H */

