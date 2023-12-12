#include <iostream>

unsigned long Fibonachi(int num) {

    if (num == 1)
        return 0;

    else if (num == 2)
        return 1;

    else
        return Fibonachi(num - 2) + Fibonachi(num - 1);
}


int main() {
    setlocale(LC_ALL, "russian");
    int num;
    std::cout << "Введите количество чисел: ";
    std::cin >> num;
    std::cout << "Числа Фибоначчи: ";
    for (int i = 1; i <= num; ++i) {
        std::cout << Fibonachi(i) << "\t";

    }
    return 0;
}




// Память константна O(1).
// Время работы О(2^n)