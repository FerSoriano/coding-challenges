/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 * 
 * https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
 * 
 * Sam is a professor at the university and likes to round each student's grade according to these rules:
 *  - If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
 *  - If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
 */


#include <iostream>
#include <vector>


std::vector<int> gradingStudents(std::vector<int> grades) {
    std::vector<int>rounded_grades;
    std::vector<int>multiples = {40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};

    int diff = 0;
    for(int grade : grades){
        for(int mult : multiples){
            if(mult > grade){
                diff = mult - grade;
                if(diff < 3) grade += diff;
                break;
            }
        }
        rounded_grades.push_back(grade);
    }
    return rounded_grades;
}


int main(){

    std::vector<int> grades = {73, 67, 38, 33};
    std::vector<int> round_grades = gradingStudents(grades);
    
    for(int grade : round_grades){
        std::cout<<grade<<'\n';
    }

    return 0;
}