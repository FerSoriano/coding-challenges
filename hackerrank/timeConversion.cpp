/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 * 
 * Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
 */

#include <iostream>
#include <string>


std::string timeConversion(std::string s) {
    std::string am_pm = s.substr(s.length() - 2);
    std::string hour_str = s.substr(0,2);
    int hour = std::stoi(hour_str);
    
    if(am_pm == "PM"){
        if(hour != 12){
            hour += 12;
        }
        return std::to_string(hour) + s.substr(2, s.length() - 4);
    }
    if(hour == 12){
        hour_str = "00";
    }

    return hour_str + s.substr(2, s.length() - 4);
}


int main(){
    std::cout<<timeConversion("12:05:45AM")<<'\n';
    std::cout<<timeConversion("12:05:45PM")<<'\n';
    std::cout<<timeConversion("07:05:45PM")<<'\n';
    return 0;
}