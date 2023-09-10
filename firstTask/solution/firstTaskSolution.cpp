//
// Created by Kyrylo on 08.09.2023.
//

#include "firstTaskSolution.h"
#include <iostream>
#include <conio.h>
#include "fcntl.h"

using namespace std;

struct MY {
    int m[2];
    int height;

    MY(void);

    MY(int a0, int a1, int height);

    ~ MY(void);

    void GETPARAM(void);

    void PRINT(void);

    int V(void);

    int S(void);

    void CMP(MY K);
};

MY::MY(void) {
    wcout << L"\n Створено об'єкт конструктором за замовчуванням";
}

MY::MY(int a0, int a1, int height) {
    wcout << L"\n Створено об'єкт параметризованим конструктором";
    m[0] = a0;
    m[1] = a1;
    this->height = height;
}

MY::~MY(void) {
    wcout << L"\n\n Об'єкт видалено з пам'яті деструктором";
}

void MY::GETPARAM(void) {
    for (int i = 0; i < 2; i++) {
        wcout << L"\n Введіть значення для " << i << L"елемента масива: ";
        wcin >> m[i];
    }
    wcout << L"\n Введіть значення висоти паралелепіпеда: ";
    wcin >> height;
}

void MY::PRINT(void) {
    wcout << L"\n Паралелепіпед має наступні значення в масиві:";
    for (int i = 0; i < 2; i++) {
        wcout << L" " << m[i];
    }
    wcout << endl;
    wcout << L"\n Паралелепіпед має висоту: " << height << endl;
}

int MY::V(void) {
    return m[0] * m[1] * height;
}

int MY::S(void) {
    return m[0] * m[1];
}

void MY::CMP(MY K) {
    int flag = 0;
    for (int i = 0; i < 2; i++) {
        if (m[i] != K.m[i]) flag = 1;
    }
    if (K.height != this->height) flag = 1;

    if (flag == 1) wcout << L"Об'єкти мають різні значення елементів масива";
    else wcout << L"Об'єкти мають однакові значення елементів масива";
}

main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << L"Створення об'єктів А,В та С";
    MY A, B, C(2, 3, 9);

    wcout << L"\n\n Введення значень для об'єкта А";
    A.GETPARAM();
    wcout << L"\n\n Введення значень для об'єкта B" << endl;
    B.GETPARAM();

    wcout << L"\n\n Масив А: ";
    A.PRINT();
    wcout << L"\n Масив B: ";
    B.PRINT();
    wcout << L"\n Масив C: ";
    C.PRINT();

    wcout << L"\n\n Обчислення площі паралелепіпеда A: ";
    wcout << A.S();
    wcout << L"\n\n Обчислення об'єму паралелепіпеда B: ";
    wcout << B.V();

    wcout << L"\n\n Порівння об'єктів B та C: ";
    B.CMP(C);

    getch();
}
