// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// prefix: ++var or --var
// postfix: var++ or var--

int main()
{
    int var_pre_assigned = 0;
    int var_pre_unassigned = 0;
    int var_post_assigned = 0;
    int var_post_unassigned = 0;
    var_pre_assigned = ++var_pre_assigned;
    ++var_pre_unassigned;
    var_post_assigned = var_post_assigned++;
    var_post_unassigned++;
    std::cout<<"prefix assigned: "<<var_pre_assigned<<"\n"
    <<"prefix unassigned: "<<var_pre_unassigned<<"\n"
    <<"postfix assigned: "<<var_post_assigned<<"\n"
    <<"postfix unassigned: "<<var_post_unassigned<<"\n";
    return 0;
}

// a link: http://en.cppreference.com/w/cpp/language/operator_incdec
