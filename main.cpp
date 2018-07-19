#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include "quicksort_tester.h"
#include "timer.h"
#include "tester_factory.h"
#include "test_manager.h"
#include "statistics.h"
#include "sort_project_tester.h"
#include  <exception>

using namespace std;
class tester_factory_exception : public exception {
    virtual const char * what() const throw () {
        return "Unrecognised algorithm";
    }
} t_ex;


int main(int argc, char** argv) {
    
    sort_project_tester s_p_tester;
    s_p_tester.run_test();
    
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    
    return 0;
}
