#include <iostream>
#include <set>
#include <stdexcept> // для std::logic_error
                                                              /*Данный пример использует стандартный контейнер set для хранения элементов
                                                              в виде упорядоченного множества.
                                                              Если перед поиском элемента множество пустое, то программа выбрасывает исключение std::logic_error с сообщением «Множество пустое».
                                                              Если элемент не найден, выводится соответствующее сообщение.
                                                              Если множество содержит элементы и элемент найден, то выводится сообщение «Элемент найден».
                                                              */
int main() {
    try {
        std::set<int> s;
        int value = 10;

        if (s.empty()) {
            throw std::logic_error("Множество пустое");
        }

        auto it = s.find(value);

        if (it == s.end()) {
            std::cout << "Элемент не найден" << std::endl;
        }
        else {
            std::cout << "Элемент найден" << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}