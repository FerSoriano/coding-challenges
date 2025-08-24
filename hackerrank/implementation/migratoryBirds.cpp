

#include <iostream>
#include <vector>

int migratoryBirds(std::vector<int> arr) {
    std::unordered_map<int, int> birds_map;
    
    for (int bird : arr) {
        birds_map[bird]++; // SI NO EXISTE LO CREA CON VALOR DE 1.
    }
    
    int id = 0, qty = 0;
    for (auto it : birds_map){
        if (it.second == qty && it.first < id) {
            id = it.first;   
        } else if (it.second > qty) {
            qty = it.second;
            id = it.first;
        }
    }
    return id;
}

int main() {

    int a = migratoryBirds({1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4});
    std::cout << a << "\n";
    int b = migratoryBirds({1, 4, 4, 4, 5, 3});
    std::cout << b << "\n";
    return 0;
}