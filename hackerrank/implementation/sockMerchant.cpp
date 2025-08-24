

#include <iostream>
#include <vector>


int sockMerchant(int n, std::vector<int> ar) {
    std::unordered_map<int, int> map;
    
    for (int sock : ar){
        map[sock]++;
    }
    
    int total_pairs = 0;
    for (const auto& it : map) {
        total_pairs += it.second / 2;
    }
    
    return total_pairs;;
}


int main() {

    std::cout<<sockMerchant(7, {1, 2, 1, 2, 1, 3, 2})<<'\n';
    std::cout<<sockMerchant(9, {10, 20, 20, 10, 10, 30, 50, 10, 20})<<'\n';

    return 0;
}