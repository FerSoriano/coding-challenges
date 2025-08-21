/**
 * 
 * Maria plays college basketball and wants to go pro.
 * Each season she maintains a record of her play.
 * She tabulates the number of times she breaks her season record for 
 * most points and least points in a game. 
 * Points scored in the first game establish her record for the season, and
 * she begins counting from there.
 */


#include <iostream>
#include <vector>


std::vector<int> breakingRecords(std::vector<int> scores) {
    int min_score = scores[0], max_score = scores[0];
    int most = 0, least = 0;
    
    for(int score : scores){
        if(score < min_score){
            min_score = score;
            least++;
        }
        if(score > max_score) {
            max_score = score;
            most++;
        }
    }
    return {most, least};
}


int main(){

    std::vector<int> scores = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    std::vector<int> result = breakingRecords(scores);
    for(auto r : result){
        std::cout<<r<<'\n';
    }
    return 0;
}