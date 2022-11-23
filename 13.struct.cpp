#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Books book);
void printBook1(struct Books* book);

//4.typedef �ؼ���
typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Books;

int main() {
    struct Books Book1;        // ���� Book1������Ϊ Book
    struct Books Book2;        // ���� Book2������Ϊ Book
    //1.�ṹ��
    // Book1 ����
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // Book2 ����
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;
    // ��� Book1 ��Ϣ
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;
    // ��� Book2 ��Ϣ
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    //2.�ṹ����Ϊ��������
    cout << "\n" << endl;
    printBook(Book1);
    printBook(Book2);

    //3.ָ��ṹ���ָ��
    cout << "\n" << endl;
    printBook1(&Book1);
    printBook1(&Book2);
    return 0;
}

void printBook(struct Books book) {
    cout << "Book title : " << book.title << endl;
    cout << "Book author : " << book.author << endl;
    cout << "Book subject : " << book.subject << endl;
    cout << "Book id : " << book.book_id << endl;
}

// �ú����Խṹָ����Ϊ����
void printBook1(struct Books* book)
{
    cout << "Book title : " << book->title << endl;
    cout << "Book author : " << book->author << endl;
    cout << "Book subject : " << book->subject << endl;
    cout << "Book id : " << book->book_id << endl;
}