#include <iostream>
using namespace std;

bool palindrome(const char str[]) {
    int length = 0;
    // Вычисляем длину строки
    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    // Сравниваем символы с начала и конца, игнорируя пробелы
    while (left < right) {
        // Пропускаем пробелы слева
        while (left < right && str[left] == ' ') {
            left++;
        }
        // Пропускаем пробелы справа
        while (left < right && str[right] == ' ') {
            right--;
        }
        // Сравниваем символы
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[100]; // Массив для хранения строки

    cout << "Введите строку: ";
    cin.getline(str, 100); // Считываем строку с пробелами

    if (palindrome(str)) {
        cout << "Строка является палиндромом." << endl;
    } else {
        cout << "Строка не является палиндромом." << endl;
    }

    return 0;
}
