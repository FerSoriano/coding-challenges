/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 * 
 * You are in charge of the cake for a child's birthday. 
 * It will have one candle for each year of their total age. 
 * They will only be able to blow out the tallest of the candles. 
 * Your task is to count how many candles are the tallest.
 */

#include <iostream>
#include <vector>

int birthdayCakeCandles(std::vector<int> candles) {
    std::unordered_map<int, int> candles_map;
    int tallest = candles[0];

    for(int candle : candles){
        if(candle > tallest) tallest = candle;
        auto it = candles_map.find(candle);
        if(it != candles_map.end()){
            candles_map[candle] += 1;
        } else{
            candles_map[candle] = 1;
        }
    }

    return candles_map[tallest];
}

int main(){
    std::vector<int>candle_heights = {3, 2, 1, 3, 3};
    std::cout<<birthdayCakeCandles(candle_heights)<<'\n';
    return 0;
}