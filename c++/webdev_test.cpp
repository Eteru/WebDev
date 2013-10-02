#include <iostream>
#include <cstdarg>
#include <vector>
#include "functions.cpp"

using namespace std;

void solver (int num, int x, ...);

int main (void) {
    solver(2, 1, &add_five, &multiply_by_three);
    solver(5, 6, &add_five, &subtract_five, &multiply_by_three, &multiply_by_seven, &subtract_three);
    cin.ignore();
return 0;
}

void solver (int num, int x, ...) {
     va_list arguments;
     vector<int> output;
     va_start (arguments, x);
     int (*current)(int);
     for (int i = 0; i < num; i++) {
         current = va_arg(arguments, int (*)(int));
         output.push_back (current(x));
     }     
     va_end(arguments);
     cout<<"[";
     for (int i = 0; i < num-1; i ++) {
         cout<<output[i]<<", ";    
     }
     cout<<output[num-1]<<"]\n";
}
