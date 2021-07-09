/* 
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
    int b1, b2, b3, b4, b, y;
    b1 = x & 0xAA;
    x = x >> 8;
    b2 = x & 0xAA;
    x = x >> 8;
    b3 = x & 0xAA;
    x = x >> 8;
    b4 = x & 0xAA;
    b = b1 & b2 & b3 & b4;
    y = b ^ 0xAA;
    return !y;
}
