#include <utility>
#include <iostream>
#include <bitset>

using I = uint8_t;

auto dump(I v) { return std::bitset<sizeof(I) * __CHAR_BIT__>(v); }

I bit_twiddle_permute(I v) {
    I t = v | (v - 1); // t gets v's least significant 0 bits set to 1
    // Next set to 1 the most significant bit to change,
    // set to 0 the least significant ones, and add the necessary 1 bits.
    I w = (t + 1) | (((~t & -~t) - 1) >> (__builtin_ctz(v) + 1));
    return w;
}

int main() {
    I p = 0b001001;
    std::cout << dump(p) << "\n";
    for (I n = bit_twiddle_permute(p); n>p; p = n, n = bit_twiddle_permute(p)) {
        std::cout << n << "\n";
    }
}

