#include <iostream>
#include<string.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>
using namespace std;

/*
1.����ģ��
2.��ģ��
*/

//1.����ģ��
template <typename T>
inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}

//2.��ģ��
template <class T>
class Stack {
private:
    vector<T> elems;     // Ԫ�� 

public:
    void push(T const&);  // ��ջ
    void pop();               // ��ջ
    T top() const;            // ����ջ��Ԫ��
    bool empty() const {       // ���Ϊ���򷵻��档
        return elems.empty();
    }
};
template <class T>
void Stack<T>::push(T const& elem)
{
    // ׷�Ӵ���Ԫ�صĸ���
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // ɾ�����һ��Ԫ��
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // �������һ��Ԫ�صĸ��� 
    return elems.back();
}

void test1()
{
    //1.
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;
    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
}

void test2()
{
     //2.
    try {
        Stack<int>         intStack;  // int ���͵�ջ 
        Stack<string> stringStack;    // string ���͵�ջ 

        // ���� int ���͵�ջ 
        intStack.push(7);
        cout << intStack.top() << endl;

        // ���� string ���͵�ջ 
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex) {
        cout << "Exception: " << ex.what() << endl;
    }
}

int main()
{  
    test2();
    return 0;
}