#include <iostream>
#include <set>
#include <stdexcept> // ��� std::logic_error
                                                              /*������ ������ ���������� ����������� ��������� set ��� �������� ���������
                                                              � ���� �������������� ���������.
                                                              ���� ����� ������� �������� ��������� ������, �� ��������� ����������� ���������� std::logic_error � ���������� ���������� ������.
                                                              ���� ������� �� ������, ��������� ��������������� ���������.
                                                              ���� ��������� �������� �������� � ������� ������, �� ��������� ��������� �������� ������.
                                                              */
int main() {
    try {
        std::set<int> s;
        int value = 10;

        if (s.empty()) {
            throw std::logic_error("��������� ������");
        }

        auto it = s.find(value);

        if (it == s.end()) {
            std::cout << "������� �� ������" << std::endl;
        }
        else {
            std::cout << "������� ������" << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cout << "����������: " << e.what() << std::endl;
    }

    return 0;
}