#include "../exercise.h"
#include <array>
#include <cstring>

// READ: std::array <https://zh.cppreference.com/w/cpp/container/array>

// TODO: 将下列 `?` 替换为正确的代码
int main(int argc, char **argv) {
    {
        std::array<int, 5> arr{{1, 2, 3, 4, 5}};
        ASSERT(arr.size() == 5, "Fill in the correct value.");
        ASSERT(sizeof(arr) == 20, "Fill in the correct value.");
        int ans[]{1, 2, 3, 4, 5};
        ASSERT(std::memcmp(arr.data(), ans, arr.size()*sizeof(int)) == 0, "Fill in the correct values.");
    }
    {
        std::array<double, 8> arr;
        ASSERT(arr.size() == 8, "Fill in the correct value.");
        ASSERT(sizeof(arr) == 64, "Fill in the correct value.");
    }
    {
        std::array<char, 21> arr{"Hello, InfiniTensor!"};
        ASSERT(arr.size() == 21, "Fill in the correct value.");
        ASSERT(sizeof(arr) == 21, "Fill in the correct value.");
        //strcmp 函数用于按字典序（ASCII 码顺序）比较两个以空字符 '\0' 结尾的字符串。它会逐个字符比较两个字符串，
        //直到找到不相等的字符或者到达字符串的末尾（即遇到 '\0'）。
        ASSERT(std::strcmp(arr.data(), "Hello, InfiniTensor!") == 0, "Fill in the correct value.");
    }
    return 0;
}
