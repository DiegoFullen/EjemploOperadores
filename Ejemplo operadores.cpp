
#include <iostream>
#include "Date.h"
#include <memory>



int main(){
    int opc = 0, mes = 0, dia = 0, a�o = 0;
    /*
    std::unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;
    std::cout << "Integer value is:" << *smartIntPtr << std::endl;

    std::unique_ptr<Date> smartDatetPtr(new Date(04,07,2022));
    smartDatetPtr->formatDate();
    */
    
    std::cout << "Ingrese el mes" << std::endl;
    std::cin >> mes;
    std::cout << "Ingrese el dia" << std::endl;
    std::cin >> dia;
    std::cout << "Ingrese el a�o" << std::endl;
    std::cin >> a�o;
    Date a(mes, dia, a�o);

    while (opc != 7) {
        std::cout << "  1- Sumar dia\n  2- Sumar mes\n  3- Sumar a�o" << std::endl;
        std::cout << "  4- Restar dia\n  5- Restar mes\n  6- Restar a�o\n  7- Salir" << std::endl;
        std::cin >> opc;
        switch (opc) {
        default:
            break;
        case 1:
            a.incrementDay();
            std::cout << a << std::endl;
            break;
        case 2:
            a.incrementMes();
            std::cout << a << std::endl;
            break;
        case 3:
            a.incrementYear();
            std::cout << a << std::endl;
            break;
        case 4:
            a.DecrementDay();
            std::cout << a << std::endl;
            break;
        case 5:
            a.DecrementMes();
            std::cout << a << std::endl;
            break;
        case 6:
            a.DecrementYear();
            std::cout << a << std::endl;
            break;
        }
        //Date b(a+10);
        //++a;
        //a++;
        //std::cout << b << std::endl;
    }
}