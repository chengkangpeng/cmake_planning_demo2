#include <iostream>
#include "process.h"
#include "show_result.h"
using std::cout, std::endl;


int main()
{
    cout << "planning strat" << endl;
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;

    ShowResult show;
    show.drawResult();

    return 0;
}