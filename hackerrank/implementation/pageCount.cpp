

#include <iostream>
#include <vector>
#include <algorithm>

int pageCount2(int n, int p) {
    int start, end;

    // p = 8
    start = p - 1; // 7
    if (start % 2 == 0) {
        start = start / 2; // 3
    } else {
        start = (start / 2) + 1;
    }

    // n = 7
    end = n - p; // 1

    if (n % 2 != 0 && end == 1) return 0;

    if (end % 2 == 0) {
        end = end / 2;
    } else {
        if ( n % 2 == 0) {
            end = (end / 2) + 1;
        } else {
            end = (end / 2);
        }
    }

    if (start < end) return start;

    return end;
}

// best solution
int pageCount(int n, int p) {
    int from_start = p / 2;    
    int from_end = (n / 2) - (p / 2);
    return std::min(from_start, from_end);
}

int main() {
    std::cout<<pageCount(5, 3)<<'\n'; // 1
    std::cout<<pageCount(6, 2)<<'\n'; // 1

    std::cout<<pageCount(5, 4)<<'\n'; // 0

    std::cout<<pageCount(8, 2)<<'\n'; // 1
    std::cout<<pageCount(8, 1)<<'\n'; // 0
    std::cout<<pageCount(8, 7)<<'\n'; // 1

    std::cout<<pageCount(7, 4)<<'\n'; // 1

    //          *
    // 01 23 45 67 8*
    return 0;
}