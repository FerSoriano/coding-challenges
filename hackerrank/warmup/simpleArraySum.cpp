/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

#include <iostream>
#include <vector>

int simpleArraySum(std::vector<int> ar) {
    int sum = 0;
    for(int i = 0; i < ar.size(); i++){
        sum += ar[i];
    }
    return sum;
}

int main(){

    std::vector<int> nums = {1, 2, 3, 4, 10, 11};
    std::cout<<"Suma: "<<simpleArraySum(nums)<<'\n';

    return 0;
}
