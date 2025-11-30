#ifndef LAB3_GOLOVA_H
#define LAB3_GOLOVA_H

#endif //LAB3_GOLOVA_H

#include "bits/stdc++.h"
#define ll long long

//task1
void multi_2(std::vector<int>& input);
void reduce_a(std::vector<int>& input, int a);
void div_on_first(std::vector<int>& input);

//task2
int sum(const std::vector<int>& input);
int square_sum(const std::vector<int>& input);
int sum_six(const std::vector<int>& input);
int sum_k(const std::vector<int>& input, int k1, int k2);
int mean(const std::vector<int>& input);
int mean_k(const std::vector<int>& input, int s1, int s2);

//task3
void swap_el(std::vector<int>& input);

//task4
void remove_negative(std::vector<int>& input);
void remove_last_even(std::vector<int>& input);

//task5
bool name_is_even(const std::string& name);

//task6
bool first_is_longer(const std::string& name_one, const std::string& name_two);

//task7
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest);

//task8
std::string sub_str(const std::string& word, int m, int n);

//task9
void add_stars(std::string& word);

//task10
int percent_of_a(const std::string& word);

//task11
std::string replace_can(const std::string& new_word);