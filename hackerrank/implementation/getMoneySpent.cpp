

#include <iostream>
#include <vector>


int getMoneySpent2(std::vector<int> keyboards, std::vector<int> drives, int b) {
    // ordernar ambos vectores de mayor a menor
    // recorrer y comparar los de mayor precio hasta encontrar el que sea menor o igual al budget.
    // almacenar el valor maximo y retornarno
    // 
    // 10 | 9
    // 3 1
    // 8 5 2

    // brute force
    std::sort(keyboards.rbegin(), keyboards.rend());
    std::sort(drives.rbegin(), drives.rend());
    
    long max_price = 0;
    for (const int& keyboard : keyboards) {
        for (const int& drive : drives) {
            int aux = keyboard + drive;
            if (aux <= b){
                max_price = aux > max_price ? aux : max_price;
                break;
            }
        }
    }
    return max_price > 0 ? max_price : -1;
}

// 10 | 9
// 1 3
// 8 5 2
// enhanced
int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    std::sort(keyboards.begin(), keyboards.end());
    std::sort(drives.rbegin(), drives.rend());
    
    long max_price = -1, i = 0, k = 0;
    
    while (i < keyboards.size() && k < drives.size()) {
        long current_price = keyboards[i] + drives[k];

        if (current_price == b) return current_price;

        if (current_price <= b) {
            max_price = std::max(max_price, current_price);
            i++;
        } else {
            k++;
        }
    }
    return max_price;
}

int main() {
    std::cout<<getMoneySpent({3,1},{5,2,8},10)<<'\n';
    std::cout<<getMoneySpent({4},{5},5)<<'\n';
    return 0;
}