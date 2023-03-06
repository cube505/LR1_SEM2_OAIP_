#include "check_input.h"

bool check_input(int* size)
{
    if (std::cin.fail() or *size<=0) {
        std::cout << "Некорректный ввод! Повторите попытку: \n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
}
