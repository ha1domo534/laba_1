#include <iostream>
#include <string>
#include <cctype> // для функций toupper и tolower

int main() {
    std::string input;

    // Запрашиваем ввод строки у пользователя
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Преобразование в верхний регистр
    std::string upperCase;
    for (char c : input) {
        upperCase += std::toupper(static_cast<unsigned char>(c)); // Приведение к upper case
    }

    // Преобразование в нижний регистр
    std::string lowerCase;
    for (char c : input) {
        lowerCase += std::tolower(static_cast<unsigned char>(c)); // Приведение к lower case
    }

    // Вывод результатов
    std::cout << "Верхний регистр: " << upperCase << std::endl;
    std::cout << "Нижний регистр: " << lowerCase << std::endl;

    return 0;
}
