//1.auto ����RAM�еľֲ�����
//2.register ����Ĵ����еľֲ�����
//3.mutable ��������Ķ���
//4.static static �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ��ڣ�������Ҫ��ÿ����������뿪������ʱ���д���������
//5.extern extern �洢�������ṩһ��ȫ�ֱ��������ã�ȫ�ֱ��������еĳ����ļ����ǿɼ���
//extern ����������һ���ļ�������һ��ȫ�ֱ���������
#include <iostream>

// �������� 
void func(void);

static int count = 10; /* ȫ�ֱ��� */

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}
// ��������
void func(void)
{
    static int i = 5; // �ֲ���̬����
    i++;
    std::cout << "���� i Ϊ " << i;
    std::cout << " , ���� count Ϊ " << count << std::endl;
}