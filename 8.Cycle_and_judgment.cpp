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
        cout << "a value:" << a << endl;
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
        cout << "a1 value" << a1 << endl;
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
        cout << "a2 value" << a2 << endl;
        a2 = a2 + 1;
    } while (a2 < 17);

    //3.switch
    // �ֲ���������
    char grade = 'D';
    switch (grade)
    {
    case 'A':
        cout << "good" << endl;
        break;
    case 'B':
    case 'C':
        cout << "do well" << endl;
        break;
    case 'D':
        cout << "you passed" << endl;
        break;
    case 'F':
        cout << "try it" << endl;
        break;
    default:
        cout << "no grade" << endl;
    }
    cout << "you grade is " << grade << endl;
    return 0;
}