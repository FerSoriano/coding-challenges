

#include <iostream>
#include <string>


int countingValleys(int steps, std::string path) {
    int valleys = 0, current_level = 0;
    bool in_valley = false;
    
    for (const char& c : path) {
        if (c == 'U') current_level++;
        if (c == 'D') current_level--;
        if (current_level < 0) in_valley = true;     
        if (in_valley && current_level == 0) {
            valleys++;
            in_valley = false;
        }
    }
    return valleys;
}

int main() {
    std::cout<<countingValleys(8, "UDDUUUUDD")<<'\n';
    std::cout<<countingValleys(8, "UDDDUDUU")<<'\n';
    return 0;
}