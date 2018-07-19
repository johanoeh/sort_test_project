/* 
 * File:   test_manager.cpp
 * Author: johan
 * 
 * Created on den 31 maj 2018, 03:27
 */

#include <memory>
#include "test_manager.h"
#include "test_math.h"


test_manager::test_manager(){
}
/**
 * Runs test of sorting algorithm  based on the testproperties (test_prop)
 * @param prop
 * @return 
 */
std::vector<std::shared_ptr<statistics> > test_manager::run_test(test_prop & prop) {
    
    std::vector<std::shared_ptr<statistics> > s_vec;
    for (unsigned int i = prop.get_start_n(); i <= prop.get_stop_n(); i+=prop.get_increment()){
        auto m = std::make_shared<measurements>(i);
        for (int j = 0; j < prop.get_replications(); j++) {    
           auto s_tester  = factory.get_tester(i,prop.get_algorithm_name(),prop.get_order());
           (*m).add_value((*s_tester).run_test());
        }
        double mean = mean_value((*m));
        double s_dev = std_dev((*m),mean);
        auto stats = std::make_shared<statistics>(s_dev, mean, i, prop.get_replications(),prop.get_algorithm_name());
        s_vec.push_back(stats);
    }
 
    return s_vec;
}

test_manager::test_manager(const test_manager& orig) {
}

test_manager::~test_manager() {
}

