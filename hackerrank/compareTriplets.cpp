/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */


#include <iostream>
#include <vector>


std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int pts_a = 0, pts_b = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            pts_a++;
        }
        if(a[i] < b[i]){
            pts_b++;
        }
    }

    result.push_back(pts_a);
    result.push_back(pts_b);

    return result;
}

int main(){

    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {3, 2, 1};

    std::vector<int> r = compareTriplets(a, b);
    std::cout<<r[0]<<", "<<r[1]<<'\n';

    return 0;
}
