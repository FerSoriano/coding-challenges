/*
 * Complete the 'kangaroo' function below.
 *
 * You are choreographing a circus show with various animals.
 * For one act, you are given two kangaroos on a number line 
 * ready to jump in the positive direction
 * 
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 * 
 * https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
 * 
 *     k1
 *           k2
 */

#include <iostream>
#include <string>


// TODO: improve logic
std::string kangaroo(int x1, int v1, int x2, int v2) {
    while(true){
        if(x1 > x2 && v1 >= v2) return "NO";
        if(x2 > x1 && v2 >= v1) return "NO";

        if(x1 == x2) return "YES";
        x1 += v1;
        x2 += v2;

        int diff = std::abs(x1 - x2);
        if(diff > v1) return "NO";

        if(x2 > x1 && v2 >= v1) return "NO";
    }
}


int main(){
    std::cout<<kangaroo(0, 3, 4, 2)<<'\n';
    std::cout<<kangaroo(2, 1, 2, 2)<<'\n';
    std::cout<<kangaroo(0, 2, 5, 3)<<'\n';
    std::cout<<kangaroo(0, 1, 1, 1)<<'\n';
    std::cout<<kangaroo(0, 3, 11, 1)<<'\n';
    std::cout<<kangaroo(1571, 4240, 9023, 4234)<<'\n';
    return 0;
}