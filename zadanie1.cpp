#include <iostream>

int main() {
    int n;

    std::cout << "Введите высоту треугольника: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Печатаем пробелы для выравнивания
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        // Печатаем звездочки
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl; // Переход на новую строку
    }

    return 0;
}