#include <stdio.h>

int main()
{
    int num = 10; // ������ ���� 'num'�� �����ϰ� 10���� �ʱ�ȭ
    int *ptr;     // ������ ������ 'ptr' ����

    ptr = &num; // ptr�� num ������ �ּ�(&) ����

    // ���� num ���� ���
    printf("���� num�� �� : %d\n", num);
    printf("���� num�� �ּ� : %p\n\n", &num);

    // ������ ptr ���� ���
    printf("������ ptr�� ����� �� (�ּ�) : %p\n", ptr);
    printf("������ ptr�� ����Ű�� �� : %d\n\n", *ptr);

    // �����͸� ����ؼ� num ���� ���� ����
    *ptr = 20;

    // ���� ���� �� num ������ �ٽ� ���
    printf("�����ͷ� ���� ������ ��...\n");
    printf("���� num�� ���ο� ��: %d\n", num);
    printf("������ ptr�� ����Ű�� ���ο� ��: %d\n", *ptr);

    return 0;
}