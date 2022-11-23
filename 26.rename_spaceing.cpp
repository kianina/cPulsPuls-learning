#include <iostream>
using namespace std;
using std::cout;

// ��һ�������ռ�
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// �ڶ��������ռ�
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

//3.Ƕ�������ռ�
// ��һ�������ռ�
namespace first_space1 {
    void func() {
        cout << "Inside first_space" << endl;
    }
    // �ڶ��������ռ�
    namespace second_space1 {
        void func1() {
            cout << "Inside second_space" << endl;
        }
    }
}
using namespace first_space1::second_space1;
//2.ʹ��using
using namespace first_space;
int main()
{
    // ���õ�һ�������ռ��еĺ���
    first_space::func();
    // ���õڶ��������ռ��еĺ���
    second_space::func();

    cout << "std::endl is used with std!" << std::endl;
    func();
    func1();
  
    return 0;
}