 //   Пример реализации внутри класса 

#include <iostream>
#include <stdexcept> // для std::out_of_range

class Array {
public:
    Array(int size) : size_(size), data_(new int[size]) {}

    ~Array() { delete[] data_; }

    int get(int index) const {
        if (index < 0 || index >= size_) {
            throw std::out_of_range("Неправильный индекс массива");
        }
        return data_[index];
    }

private:
    int size_;
    int* data_;
};

int main() {
    try {
        Array arr(5);
        int index = 10;
        int value = arr.get(index);
    }
    catch (const std::exception& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}