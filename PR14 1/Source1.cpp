#include <iostream>

int main() {
    try {
        int a = 10, b = 0;
        int c = a / b; //деление на 0

        // Другой код, который может вызвать деление на 0
    }
    catch (const std::exception& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}