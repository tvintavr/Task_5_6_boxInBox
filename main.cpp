#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a,b,c,m,n,k;
    std::cout << " Задача вместимости решается исключительно с учётом ортогонального расположения коробок\n";
    std::cout << "Введите параметры большой коробки (AxBxC): ";
    std::cin >> a>>b>>c;
    std::cout << "Введите параметры маленькой коробки (MxNxK): ";
    std::cin >> m>>n>>k;
    int maxBig=std::max(std::max(a,b),c);   // Наибольший размер большой коробки
    int minBig=std::min(std::min(a,b),c);   // Наименьший размер большой коробки
    int avBig=a+b+c-maxBig-minBig;          // Средний размер большой коробки
    int maxSmall=std::max(std::max(m,n),k); // Наибольший размер маленькой коробки
    int minSmall=std::min(std::min(m,n),k); // Наименьший размер маленькой коробки
    int avSmall=m+n+k-maxSmall-minSmall;    // Средний размер маленькой коробки
    if (maxBig >= maxSmall && // Сравнение наибольших размеров
        minBig>=minSmall && // Сравнение наименьших размеров
        avBig>=avSmall) { // Сравнение средних размеров
        std::cout<< "Вмещается";
    } else {
        std::cout<< "Не вмещается";
    }
}



