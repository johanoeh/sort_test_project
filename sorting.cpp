/* 
 * File:   sorting.cpp
 * Author: johan
 * 
 * Created on den 8 maj 2018, 14:50
 */

#include "sorting.h"
#include <iostream>

template<class T>
T partition(T  l, T  r){
    T v =  r;
    T i = l;
    T j = r-1;
    while( i <= j ){
        while(*i < *v){ i++;}
        while(*j > *v){ j--; }
        if(i <= j){
            std::swap(*i,*j);
            i++; j--;
        }
    }
    std::swap(*v,*i);
    return i;
}

template <class T>
void quick_sort(T  l, T  r){
    if(r <= l ) return;
    T i = partition(l,r);
    quick_sort(l,i-1);
    quick_sort(i+1,r);
}

template<class T>
inline void medianmize(T l, T r){
    T m = l+std::distance(l,r)/2;
    // l < m
    if(*m < *l){ std::swap(*m,*l); } 
    // r < m
    if(*m < *r){ std::swap(*m,*r); }
    // l < r < m
    if(*r-1 < *l){ std::swap(*r,*l); } 
}

template<class T>
void median_sort(T l, T r){
    if(r <= l ) return;
    medianmize(l,r);
    T i = partition(l,r);
    median_sort(l,i-1);
    median_sort(i+1,r);  
}

template<class T>
void insertion_sort(T l, T r){
    for( T i = l+1; i <=r; i++){
        T j = i-1;
        auto v = *i;
        while(v < *j && j >= l ){
            *(j+1) = *j;
            j--;
        }
        *(j+1) = v;
    }  
}

template <class T>
void selection_sort(T l, T r){
    for(T i = l ; i <=r; i++){
        T min = i;
        for(T j  = i+1; j <=r; j++){
            if(*j < *min) {min = j;}
        }
        std::swap(*i,*min);
    }
}