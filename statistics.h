/* 
 * File:   statistics.h
 * Author: johan
 *
 * Created on den 19 juni 2018, 21:11
 * container class for statistics
 * 
 */

#ifndef STATISTICS_H
#define STATISTICS_H

#include <ostream>
#include<string>


class statistics {
public:
    statistics(); 
    statistics(double std_deviation,double mean_value, unsigned int n,unsigned int replications, std::string algorithm_name);
    statistics(const statistics& orig);
    
    /* getter and setter functions for stored variables*/
    
    void set_std_deviation(double);
    double get_std_deviation();
    void set_mean_value(double);
    double get_mean_value();
    void set_n(unsigned int);
    unsigned int get_n();
    void set_replications(unsigned int);
    unsigned int get_replications();
    void set_algorithm_name(std::string);
    std::string get_algorithm_name();
    
    // make class friend of ostream so that it can access private members
    friend std::ostream & operator << (std::ostream & out, statistics & stat);
    virtual ~statistics();
    
private:
    
    double std_deviation;
    double mean_value;
    unsigned int n;
    unsigned int replications;
    std::string algorithm_name;

};




#endif /* STATISTICS_H */

