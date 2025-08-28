

#include <iostream>
#include <vector>

int birthday(std::vector<int> s, int d, int m) {
    int segments = 0;
    for (int i = 0; i < s.size(); i++) {
        int sum = 0;
        for (int k = i; k < m + i; k++) {
            sum += s[k];
        }
        if (sum == d) segments++;
    }
    return segments;
}


int main(){
    //                            m
    std::cout<<birthday({1, 2, 1, 3, 2}, 3, 2)<<'\n';

    return 0;
}