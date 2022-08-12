#include <iostream>

using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){

int value = 0;

int base = 1;

int i = number_of_digits-1;

while(i>=0){

value += bin_digits[i]*base;

base = base*2;

i--;
}

return value;
}
