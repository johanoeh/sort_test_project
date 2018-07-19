/**
 * Used to test a sorting algorithm
 */

#ifndef SORT_TESTER_H
#define SORT_TESTER_H
#include "utils.cpp"
#include "timer.h"
#include <vector>
#include "sorting.cpp"
#include "tester_interface.h"

class tester : public tester_interface {
protected:
    unsigned int N;
    std::string order;
    timer t;
    std::vector<int> a;
public:
    tester(unsigned int n, std::string order);
    virtual double run_test(void) = 0;
    std::vector<int> get_elements();
    virtual ~tester();
private:

};

#endif /* SORT_TESTER_H */

