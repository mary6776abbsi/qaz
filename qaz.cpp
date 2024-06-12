#include <iostream>

int main() {
    int numStars;

    // دریافت عدد از ورودی
    std::cout << "Enter the number of stars to print: ";
    std::cin >> numStars;

    // چاپ ستاره‌ها به تعداد وارد شده
    for (int i = 0; i < numStars; ++i) {
        std::cout << "*";
    }

    // خط جدید برای خوانایی بهتر خروجی
    std::cout << std::endl;

    return 0;
}
