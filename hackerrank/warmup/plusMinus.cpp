/*
Print the ratios of positive, negative and zero values in the array.
Each value should be printed on a separate line with 6 digits after the decimal.
The function should not return a value.
 */

#include <iostream>
#include <vector>
#include <iomanip>

void plusMinus(std::vector<int> arr) {
    int len = arr.size();
    int pos = 0, neg = 0, zero = 0;

    for(auto i : arr){
        pos += (i > 0) ? 1 : 0;
        neg += (i < 0) ? 1 : 0;
        zero += (i == 0) ? 1 : 0;
    }

    std::cout<<std::fixed<<std::setprecision(6)<<float(pos) / len<<'\n';
    std::cout<<std::fixed<<std::setprecision(6)<<float(neg) / len<<'\n';
    std::cout<<std::fixed<<std::setprecision(6)<<float(zero) / len<<'\n';
}


int main(){
    std::vector<int> arr = {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);
    return 0;
}