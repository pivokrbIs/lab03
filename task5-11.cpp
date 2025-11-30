#include "golova.h"

// Task 5.
bool name_is_even(const std::string& name) {
    if (name.length() % 2 == 0) return true;
    return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    if (name_one.length() > name_two.length()) return true;
    return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
    std::vector<std::pair<int, std::string>> arr = {std::make_pair(name_one.length(),name_one),
                                                    std::make_pair(name_two.length(),name_two),
                                                    std::make_pair(name_three.length(),name_three)};
    std::sort(arr.begin(), arr.end());
    the_longest = arr[2].second;
    the_shortest = arr[0].second;
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
    std::string arr;
    for (int i = m; i <= n;i++) arr += word[i];
    return arr;
}

// Task 9.
void add_stars(std::string& word) {
    for (int i = 0; i < word.length();i++) word = '*' + word + '*';
}

// Task 10.
int percent_of_a(const std::string& word) {
    int cnt = 0;
    for (int i = 0; i < word.length();i++) if (word[i] == 'a') cnt++;
    return 100*cnt/word.length();
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string answer = "";
    std::string s = "";
    for (int i = 0; i < new_word.length();i++)
    {
        if (new_word[i] == ' ')
        {
            if (s == "can") answer += ("new_word ");
            else answer += s + ' ';
        }
        s = "";
    }
    if (s == "can") answer += ("new_word ");
    else answer += s + ' ';
    return answer;
}

int main() {}