/**
 * Given five positive integers, 
 * find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
 * Then print the respective minimum and maximum values as a single line of two space-separated long integers.
 * 
 * 
    i
    1 2 3 4 5
    k
 */


 #include <iostream>
 #include <vector>

void miniMaxSum(std::vector<int> arr) {
    long total = 0;
    int min_value = arr[0], max_value = arr[0];

    for(int val : arr){
        total += val;
        max_value = (val > max_value) ? val : max_value;
        min_value = (val < min_value) ? val : min_value;
    }

    long sum_min = total - max_value;
    long sum_max = total - min_value;
    
    std::cout<<sum_min<<" "<<sum_max<<'\n';
}


int main(){

    std::vector<int> nums {1, 2, 3, 4, 5};
    std::vector<int> nums2 {793810624, 895642170, 685903712, 623789054, 468592370};
    miniMaxSum(nums);
    return 0;
}