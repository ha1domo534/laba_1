#include <iostream>
#include <string>
#include <cctype> // для использования функций isalpha, isdigit, isspace

int main() {
    // исходная строка, которую мы будем обрабатывать
    std::string input;
    std::cout << "введите строку: ";
    std::getline(std::cin, input); // считываем всю строку, включая пробелы

    // строка для хранения результата
    std::string result;

    // проходим по каждому символу исходной строки
    for (char ch : input) {
        // проверяем, является ли символ буквой, цифрой или пробелом
        if (std::isalpha(ch) || std::isdigit(ch) || std::isspace(ch)) {
            // если да, добавляем его в результат
            result += ch;
        }
        // все остальные символы (знаки препинания и служебные символы) игнорируются
    }

    // выводим результат
    std::cout << "результат: " << result << std::endl;

    return 0;
}
