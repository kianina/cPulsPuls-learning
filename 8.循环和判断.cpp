#include <iostream>
using namespace std;

int main()
{
    //1.break
    // �ֲ���������
    int a = 10;

    // do ѭ��ִ��
    do
    {
        cout << "a ��ֵ��" << a << endl;
        a = a + 1;
        if (a > 15)
        {
            // ��ֹѭ��
            break;
        }
    } while (a < 20);
    //2.continue
      // �ֲ���������
    int a1 = 10;

    // do ѭ��ִ��
    do
    {
        if (a1 == 15)
        {
            // ��������
            a1 = a1 + 1;
            continue;
        }
        cout << "a1 ��ֵ��" << a1 << endl;
        a1 = a1 + 1;
    } while (a1< 20);
    //3.goto
    // �ֲ���������
    int a2 = 10;
    // do ѭ��ִ��
    LOOP:do
    {
        if (a2 == 15)
        {
            // ��������
            a2 = a2 + 1;
            goto LOOP;
        }
        cout << "a2 ��ֵ��" << a2 << endl;
        a2 = a2 + 1;
    } while (a2 < 17);

    //3.switch
    // �ֲ���������
    char grade = 'D';
    switch (grade)
    {
    case 'A':
        cout << "�ܰ���" << endl;
        break;
    case 'B':
    case 'C':
        cout << "���ú�" << endl;
        break;
    case 'D':
        cout << "��ͨ����" << endl;
        break;
    case 'F':
        cout << "�������һ��" << endl;
        break;
    default:
        cout << "��Ч�ĳɼ�" << endl;
    }
    cout << "���ĳɼ��� " << grade << endl;
    return 0;
}