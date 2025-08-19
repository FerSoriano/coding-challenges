#include <iostream>
#include <string>

void staircase2(int n){
    int spaces = n - 1;
    int tmp = 1;
    while(spaces >= 0){
        for(int k = 0; k < spaces; k++){
            std::cout<<" ";
        }
        for(int j = 0; j < tmp; j++){
            std::cout<<"#";
        }
        std::cout<<'\n';
        spaces--;
        tmp++;
    }
}

// version mejorada
void staircase(int n){
    std::string row(n,' ');
    for(int i = 1; i <= n; i++){
        row[n - i] = '#';
        std::cout<<row<<'\n';
    }
}


int main(){
    staircase(3);
    std::cout<<"-----\n";
    staircase2(3);
    return 0;
}