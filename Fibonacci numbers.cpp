#include <iostream>

unsigned long Fibonachi(int* memory_mass,int num) {
   
    if (memory_mass[num - 1] != NULL) {
        return  memory_mass[num - 1];
    }
    else if (num == 1){
        memory_mass[num - 1] = 0;
        return 0;
}
    else if (num == 2) {
        memory_mass[num - 1] = 1;
        return 1;
    }
    else {
        return Fibonachi(memory_mass, num - 2) + Fibonachi(memory_mass, num - 1);
        memory_mass[num - 1] = Fibonachi(memory_mass, num - 2) + Fibonachi(memory_mass, num - 1);
    }
}


int main() {
    setlocale(LC_ALL, "russian");
    int num;
    std::cout << "Введите количество чисел: ";
    std::cin >> num;
    int* memory_mass = new int[num]();
    std::cout << "Числа Фибоначчи: ";
    for (int i = 1; i <= num; ++i) {
        std::cout << Fibonachi(memory_mass, i) << "\t";

    }
    return 0;
}