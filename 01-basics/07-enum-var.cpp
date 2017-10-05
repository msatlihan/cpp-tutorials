// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// C++ allows enumerated types (enum).

#include <iostream>

int main()
{
    enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    // enum variable MONTH has twelve possible values.
    // These 12 values translate into 12 integer values. Jan = 0, Feb = 1, etc.

    // Define bestMonth as a variable type MONTH
    MONTH bestMonth;
    
    // Assign bestMonth one of the values of MONTH
    bestMonth = Jan;
    
    // Now we can check the value of bestMonth just 
    // like any other variable
    if(bestMonth == Jan)
    {
        std::cout<<"I'm not so sure January is the best month\n";
    }
    std::cout<<"Size of MONTH = "<<sizeof(MONTH)<<"\n"
    <<"Size of bestMonth = "<<sizeof(bestMonth)<<"\n";
    return 0;
}

// more on other datatypes: http://www.cplusplus.com/doc/tutorial/other_data_types/