#include "golova.h"

int sum(const std::vector<int>& input)
{
    int answer = 0;
    for (int i = 0; i < input.size();i++) answer += input[i];
    return answer;
}

int square_sum(const std::vector<int>& input)
{
    int answer = 0;
    for (int i = 0; i < input.size();i++) answer += (input[i]*input[i]);
    return answer;
}

int sum_six(const std::vector<int>& input)
{
    int answer = 0;
    for (int i = 0; i < 8;i++) answer += input[i];
    return answer;
}

int sum_k(const std::vector<int>& input, int k1, int k2)
{
    int answer = 0;
    for (int i = k1; i <= k2;i++) answer += input[i];
    return answer;
}

int mean(const std::vector<int>& input)
{
    int suma = 0;
    for (int i = 0; i < input.size();i++) suma += input[i];
    int answer = suma/input.size();
    return answer;
}

int mean_k(const std::vector<int>& input, int s1, int s2)
{
    int suma = 0;
    for (int i = s1; i <= s2;i++) suma += input[i];
    int answer = suma/(s2 - s1 + 1);
    return answer;
}