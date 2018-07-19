#ifndef TEST_PROP_H
#define TEST_PROP_H
#include "utils.h"


class test_prop {

public:

    test_prop( 
            std::string algorithm_name, 
            unsigned int replications, 
            unsigned int increment,
            unsigned int n_start, 
            unsigned int n_stop, 
            std::string sort_order
            );
    test_prop(const test_prop& orig);
    
    virtual ~test_prop();
    void set_order(std::string order);
    std::string get_order() const;
    void set_stop_n(unsigned int stop_n);
    unsigned int get_stop_n() const;
    void set_start_n(unsigned int start_n);
    unsigned int get_start_n() const;
    void set_increment(unsigned int increment);
    unsigned int get_increment() const;
    void set_replications(unsigned int replications);
    unsigned int get_replications() const;
    void set_algorithm_name(std::string algorithm_n);
    std::string get_algorithm_name() const;
    
private:
    
    std::string algorithm_name;
    unsigned int replications;
    unsigned int increment;
    unsigned int start_n;
    unsigned int stop_n;
    std::string order;

};

#endif /* TEST_PROP_H */

