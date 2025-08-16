/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
Example 1:
                 k
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include <iostream>
#include <vector>

void printVector(std::vector<int>nums);

class Solution {
public:
    std::vector<int> twoSumBruteForce(std::vector<int>& nums, int target) {
        std::vector<int> result;
        int tmp;
        for(int i=0; i < nums.size(); i++){
            tmp = target - nums[i]; // 7
            for(int k=0; k<nums.size(); k++){
                if(nums[k] == tmp && i != k){
                    result.push_back(i);
                    result.push_back(k);
                    return result;
                }
            }            
        }
        return result;
    }

      /*            i
        nums   = [2,7,11,15], target = 9
        map    = {2: 0}
        result = [0,1] ✅
    */
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        int tmp;
        std::vector<int> result;
        std::unordered_map<int, int> map;

        for(int i=0; i < nums.size(); i++){
            tmp = target - nums[i]; // 2
            if(map.find(tmp) != map.end()){
                result.push_back(map[tmp]);
                result.push_back(i);
                return result;
            }else{
                map[nums[i]] = i;
            }
        }
        return result;
    }
};


int main(){
    Solution sol;
    std::vector<int> nums;
    int target;

    nums = {2,7,11,15};
    target = 9;
    printVector(sol.twoSum(nums, target));

    nums = {3,2,4};
    target = 6;
    printVector(sol.twoSum(nums, target));

    nums = {3,3};
    target = 6;
    printVector(sol.twoSum(nums, target));

    return 0;
}


void printVector(std::vector<int>nums){
    for(int i = 0; i < nums.size(); i++){
        std::cout<< nums[i] << ", ";
    }
    std::cout<<"\n";
}
