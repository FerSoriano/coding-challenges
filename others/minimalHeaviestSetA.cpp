
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


std::vector<int> minimalHeaviestSetA(std::vector<int> arr) {
    std::vector<int> setA;
    // ordenamos de mayor a menor
    std::sort(arr.rbegin(), arr.rend());
    
    int total_weight = 0;
    for (int weight : arr) total_weight += weight;

    int sum = 0;
    for (int ar : arr) {
        if (sum < total_weight - sum) {
            sum += ar;
            setA.push_back(ar);
        } else {
            break;
        }
    }
    // ordenamos de menor a mayor
    std::sort(setA.begin(), setA.end());
    return setA;
}


int main(){

    std::vector<int> weight = {5, 3, 2, 4, 1, 2};
    std::vector<int> splits = minimalHeaviestSetA(weight);
    for (auto s : splits) { 
        std::cout<<s<<"\n";
    }
    return 0;
}