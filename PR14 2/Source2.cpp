#include <iostream>
#include <stdexcept> // для std::out_of_range

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
                                                                           // Пример реализации для головной программы:
    try {
        int index = 10;
        if (index < 0 || index >= 5) {
            throw std::out_of_range("Неправильный индекс массива");
        }
        int value = arr[index];
    }
    catch (const std::exception& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}