#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // �ȳ��ϱ� ���� ��¹�
    std::cout << "�̸��� �Է��ϼ��� : ";

    // cin
    // �����͸� Ű����κ��� �Է¹ޱ� ���ؼ� ��
    // ���� Console.ReadLine()�̳� Scanner Ŭ����, scanf ���� �����ε�
    std::cin >> name;   // Ű����κ��� �Է��� ����

    std::cout << "���̸� �Է��ϼ��� : ";
    std::cin >> age;    // ���̸� �Է¹���

    std::cout << "�ȳ��ϼ���, " << name << "��! ���� ���̴�" << age << "�� �Դϴ�!";
    return 0;

    // std::cerr
    // ǥ�� ���� ��Ʈ�� ��ü
    // ���� �޽��� ����� �� ���

    // std::clog
    // ǥ�� �α� ��Ʈ�� ��ü
    // �α� �޽����� ����� �� ���
}