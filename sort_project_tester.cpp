/* 
 * File:   sort_project_tester.cpp
 * Author: johan
 * 
 * Created on den 20 juni 2018, 08:59
 */

#include "sort_project_tester.h"

sort_project_tester::sort_project_tester(){
}


void sort_project_tester::run_test(){
    
    std::vector<int> values(10);
    
    for(auto alg: algorithms){  
        for(auto ord :order){
            fill(values.begin(),values.end(),ord);
            print(values.begin(),values.end());
            if(alg.compare(helper::INSERTION_SORT)== 0){
                insertion_sort(values.begin(),values.end());
            }else if(alg.compare(helper::MEDIAN_SORT)== 0){
                median_sort(values.begin(),values.end());
            }else if(alg.compare(helper::QUICK_SORT)== 0){
                quick_sort(values.begin(),values.end());
            }else if(alg.compare(helper::SELECTION_SORT) == 0){
               selection_sort(values.begin(),values.end());
            }else if(alg.compare(helper::STD_SORT)== 0){
                std::sort(values.begin(),values.end());
            }else{
                std::cerr<<"unknown algorith : "<< alg<<std::endl;
                break;
            }
            print(values.begin(),values.end());
            std::cout<<std::endl;
        }
    }
    
    return;

    test_manager manager;
    std::unique_ptr<test_prop>  prop;
    /*for(auto alg : algorithms ){ */
        for (auto ord : order) {
            prop = std::unique_ptr<test_prop>(new test_prop("stdsort",1,1000,1000,10000,ord));
            std::cout<<"Testing: "<< "stdsort" <<" order: "<< ord << std::endl<<std::endl;
            std::cout<<"[N]\t" <<"samples \t"<<"T[s] \t"<<"stddev [s] \t"<<std::endl;
            auto test = manager.run_test((*prop));
            for (auto elem : test) {
                std::cout<<(*elem);
            }
            std::cout<<std::endl;
        }
   // }
}

sort_project_tester::sort_project_tester(const sort_project_tester& orig) {
}

sort_project_tester::~sort_project_tester() {
}

