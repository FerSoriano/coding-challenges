/*
Given a year, y, find the date of the 256th day of that year according 
to the official Russian calendar during that year. 
Then print it in the format dd.mm.yyyy,
where dd is the two-digit day, mm is the two-digit month, and yyyy is y.
*/

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */


#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <sstream>

std::string dayOfProgrammer(int year) {
    const int DAY_OF_PROGRAMMER = 256;
    std::unordered_map<int,int> months_int = {
        {1, 31}, {2, 28}, {3, 31},
        {4, 30}, {5, 31}, {6, 30},
        {7, 31}, {8, 31}, {9, 30},
        {10, 31}, {11, 30}, {12, 31},
    };
    
    // get leap year
    bool leap = false;
    if (year < 1918) {
        leap = year % 4 == 0;
    } else {
        if (year % 400 == 0 || (year % 4 ==  0 && year % 100 != 0)) leap = true;
    }
    
    if (leap) months_int[2]++; // funciona?

    int days_count = 0, day, month;
    for (int i = 1; i <= 12; i++){
        if (days_count > DAY_OF_PROGRAMMER){
            days_count -= months_int[i - 1]; // ignore current month
            day = DAY_OF_PROGRAMMER - days_count;
            month = i - 1;
            break;
        }
        days_count += months_int[i];
    }

    std::string month_str;
    if (month < 10) month_str = "0" + std::to_string(month);

    return std::to_string(day) + "." + month_str + "." + std::to_string(year);
}


int main() {

    std::cout<<dayOfProgrammer(1916)<<'\n';
    std::cout<<dayOfProgrammer(2016)<<'\n';
    std::cout<<dayOfProgrammer(2017)<<'\n';
    std::cout<<dayOfProgrammer(1800)<<'\n';
    // TODO: validate the one that failed
    return 0;
}