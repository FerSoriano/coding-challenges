/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * Complete the countApplesAndOranges function in the editor below. 
 * It should print the number of apples and oranges that land on Sam's house, each on a separate line.
 * countApplesAndOranges has the following parameter(s):
    s: integer, starting point of Sam's house location.
    t: integer, ending location of Sam's house location.
    a: integer, location of the Apple tree.
    b: integer, location of the Orange tree.
    apples: integer array, distances at which each apple falls from the tree.
    oranges: integer array, distances at which each orange falls from the tree.

 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

#include <iostream>
#include <vector>

void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges) {
    int distance, total_apples = 0, total_oranges = 0;

    for(int apple : apples){
        distance = a + apple;
        if(distance >= s && distance <= t) total_apples++;
    }

    for(int orange : oranges){
        distance = b + orange;
        if(distance >= s && distance <= t) total_oranges++;
    }

    std::cout<<total_apples<<'\n'<<total_oranges<<'\n';
}


int main(){
    std::vector<int> apples = {2, 3, -4};
    std::vector<int> oranges = {3, -2, -4};
    countApplesAndOranges(7, 10, 4, 12, apples, oranges);
    return 0;
}