/* howManyBits - return the minimum number of bits required to represent x in
 *             two's complement
 *  Examples: howManyBits(12) = 5
 *            howManyBits(298) = 10
 *            howManyBits(-5) = 4
 *            howManyBits(0)  = 1
 *            howManyBits(-1) = 1
 *            howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
int howManyBits(int x) {
    int b16, b8, b4, b2, b1, b0;
    int n = 1;
    int s = (x >> 31) & 1;
    x = x ^ (~s + 1);

    b16 = x >> 16;
    b16 = !!b16 << 4;
    x = x >> b16;

    b8 = x >> 8;
    b8 = !!b8 << 3;
    x = x >> b8;

    b4 = x >> 4;
    b4 = !!b4 << 2;
    x = x >> b4;

    b2 = x >> 2;
    b2 = !!b2 << 1;
    x = x >> b2;

    b1 = x >> 1;
    b1 = !!b1 << 1;
    x = x >> b1;

    b0 = x;

    n = n + b0 + b1 + b2 + b4 + b8 + b16;
    return n;
}