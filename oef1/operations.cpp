#include "operations.hpp"
#include <iostream>
using namespace std;

int convert_centi_inch(int numbers[3]){
    for(int i = 0; i < 3; i++){
        int x;
        x = numbers[i] / 2.54;
        cout << numbers[i] << " in inches is: " <<  x << "\n";
    }
    return 0;
}


