#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    //1.��ȡ��ǰʱ��
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);
    // �� now ת��Ϊ�ַ�����ʽ
    char* dt = ctime(&now);
    cout << "�������ں�ʱ�䣺" << dt << endl;
    // �� now ת��Ϊ tm �ṹ
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC ���ں�ʱ�䣺" << dt << endl;

    //2.ʹ�ýṹtm��ʽ��ʱ��
    tm* ltm = localtime(&now);
    // ��� tm �ṹ�ĸ�����ɲ���
    cout << "��: " << 1900 + ltm->tm_year << endl;
    cout << "��: " << 1 + ltm->tm_mon << endl;
    cout << "��: " << ltm->tm_mday << endl;
    cout << "ʱ��: " << 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":";
    cout << 1 + ltm->tm_sec << endl;
}