#include <iostream>
#include <vector>

long aVeryBigSum(std::vector<long> ar) {
    long result = 0;
    for(int i = 0; i < ar.size(); i++){
        result += ar[i];
    }
    return result;
}

int main(){

    std::vector<long> nums = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    std::cout<<"Suma: "<<aVeryBigSum(nums)<<'\n';

    return 0;
}