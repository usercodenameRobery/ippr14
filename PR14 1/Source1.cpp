#include <iostream>

int main() {
    try {
        int a = 10, b = 0;
        int c = a / b; //������� �� 0

        // ������ ���, ������� ����� ������� ������� �� 0
    }
    catch (const std::exception& e) {
        std::cout << "����������: " << e.what() << std::endl;
    }

    return 0;
}