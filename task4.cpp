#include "golova.h"

void remove_negative(std::vector<int>& input) {
    for (int i = 0; i < input.size();i++)
    {
        if (input[i] < 0) {input.erase(input.begin() + i - 1); break;}
    }
}

void remove_last_even(std::vector<int>& input) {
    for (int i = input.size()-1; i >= 0;i--)
    {
        if (input[i] % 2 == 0) {input.erase(input.begin() + i - 1); break;}
    }
}