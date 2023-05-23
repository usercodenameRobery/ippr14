#include <iostream>

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Деление на 0!";
    }
};

int division(int a, int b) {
    if (b == 0) {
        throw DivideByZeroException();
    }
    return a / b;
}

int main() {
    try {
        int a = 10, b = 0;
        int c = division(a, b);
    }
    catch (const std::exception& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}



