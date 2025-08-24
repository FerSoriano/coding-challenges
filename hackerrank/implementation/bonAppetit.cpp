

#include <iostream>
#include <vector>



void bonAppetit(std::vector<int> bill, int k, int b) {
    double anna_amount = 0;
    for (int i = 0; i < bill.size(); i++) {
        if (i != k) anna_amount += bill[i]; // 6
    }
    
    anna_amount = anna_amount / 2; // 3
    
    if ( b == anna_amount){
        std::cout<<"Bon Appetit"<<'\n';
    } else {
        std::cout<<b - anna_amount<<'\n';
    }
}


int main() {

    bonAppetit({2, 4, 6}, 2, 6);
    bonAppetit({3, 10, 2, 9}, 1, 12);
    bonAppetit({3, 10, 2, 9}, 1, 7);
    return 0;
}