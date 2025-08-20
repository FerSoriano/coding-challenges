/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.

Given a square matrix, calculate the absolute difference between the sums of its diagonals.
1 2 3
4 5 6
9 8 9
 
 i,k
[0,0] + [1,1] + [2,2]
[0,2] + [1,1] + [2,0]
 */

#include <iostream>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> arr) {
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    int aux = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++){
        for(int k = 0; k < arr[i].size(); k++){
            if(i == k){
                primary_diagonal += arr[i][k];
            }
        }
        secondary_diagonal += arr[i][aux];
        aux--;
    }
    return std::abs(primary_diagonal - secondary_diagonal);
}

int main(){

    std::vector<std::vector<int>> arr = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};
    std::cout<<diagonalDifference(arr)<<'\n';
    return 0;
}