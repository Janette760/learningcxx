#include "../exercise.h"
#include <iostream>
#include <array>

// READ: 有 cv 限定符的成员函数 <https://zh.cppreference.com/w/cpp/language/member_functions>

struct Fibonacci {
    //int numbers[11];
    std::array<int,11>numbers;
    // TODO: 修改方法签名和实现，使测试通过
    constexpr Fibonacci(const std::array<int ,11>num):numbers(num){}
   
    constexpr int get(int i) const {
        return numbers[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
