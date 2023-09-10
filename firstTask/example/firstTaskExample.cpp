//
// Created by Kyrylo on 08.09.2023.
//

#include "firstTaskExample.h"
#include <iostream>
#include <conio.h>
#include "fcntl.h"

using namespace std;

struct MY {
    int m[5];

    MY(void);

    MY(int a0, int a1, int a2, int a3, int a4);

    ~ MY(void);

    void GETPARAM(void);

    void PRINT(void);

    int DOB(void);

    void CMP(MY K);
};

MY::MY(void) {
    wcout << L"\n Створено об'єкт конструктором за замовчуванням";
}

MY::MY(int a0, int a1, int a2, int a3, int a4) {
    wcout << L"\n Створено об'єкт параметризованим конструктором";
    m[0] = a0;
    m[1] = a1;
    m[2] = a2;
    m[3] = a3;
    m[4] = a4;
}

MY::~MY(void) {
    wcout << L"\n\n Об'єкт видалено з пам'яті деструктором";
}

void MY::GETPARAM(void) {
    for (int i = 0; i < 5; i++) {
        wcout << L"\n Введіть значення для " << i << L"елемента масива";
        wcin >> m[i];
    }
}

void MY::PRINT(void) {
    wcout << L"\n Вказаний об'єкт має наступні значення в масиві";
    for (int i = 0; i < 5; i++) {
        wcout << L" " << m[i];
    }
}

int MY::DOB(void) {
    int d;
    d = m[0] * m[1] * m[2] * m[3] * m[4];
    return d;
}

void MY::CMP(MY K) {
    int flag = 0;
    for (int i = 0; i < 5; i++) {
        if (m[i] != K.m[i]) flag = 1;
    }
    if (flag == 1) wcout << L"Об'єкти мають різні значення елементів масива";
    else wcout << L"Об'єкти мають однакові значення елементів масива";
}

main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << L"Створення об'єктів А,В та С";
    MY A, B(2, 3, 6, 7, 9);

    wcout << L"\n\n Введення значень для об'єкта А";
    A.GETPARAM();

    wcout << L"\n\n Масив А: ";
    A.PRINT();
    wcout << L"\n Масив B: ";
    B.PRINT();

    wcout << L"\n\n Обчислення добутку елементів об'єкта B: ";
    wcout << B.DOB();

    wcout << L"\n\n Порівння об'єктів А та B: ";
    A.CMP(B);

    getch();
}

