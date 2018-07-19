
/* 
 * File:   tester_factory.cpp
 * Author: johan
 * 
 * Created on den 9 maj 2018, 20:42
 */

#include "tester_factory.h"
#include "quicksort_tester.h"
#include "median_of_three_tester.h"
#include "selection_sort_tester.h"
#include "std_sort_tester.h"


std::shared_ptr<tester> tester_factory::get_tester(unsigned int N, std::string algorithm_name, std::string order){
    if(algorithm_name.compare(helper::QUICK_SORT) == 0){
        return std::make_shared<quicksort_tester>(N,order);
    }else if(algorithm_name.compare(helper::MEDIAN_SORT) == 0){
        return std::make_shared<median_of_three_tester>(N,order);
    }else if(algorithm_name.compare(helper::INSERTION_SORT) == 0){
        return std::make_shared<selection_sort_tester>(N,order);
    }else if(algorithm_name.compare(helper::SELECTION_SORT) == 0){
        return std::make_shared<selection_sort_tester>(N,order);
    }else if(algorithm_name.compare(helper::STD_SORT) == 0){
        return std::make_shared<std_sort_tester>(N,order);
    }else{
        std::cerr<<"unknown algorithm"<<std::endl;
    }
}
