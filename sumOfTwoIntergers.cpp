#include <iostream>
#include <cassert>

using namespace std;

int getSum(int a, int b) {
    while (b != 0) {
        int tmp = (a & b) << 1;
        a = a ^ b;
        b = tmp;
    }
    return a;
}

int main()
{
    assert(getSum(9,11) == 20);

    return 0;
}