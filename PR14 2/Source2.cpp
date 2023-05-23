#include <iostream>
#include <stdexcept> // ��� std::out_of_range

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
                                                                           // ������ ���������� ��� �������� ���������:
    try {
        int index = 10;
        if (index < 0 || index >= 5) {
            throw std::out_of_range("������������ ������ �������");
        }
        int value = arr[index];
    }
    catch (const std::exception& e) {
        std::cout << "����������: " << e.what() << std::endl;
    }

    return 0;
}