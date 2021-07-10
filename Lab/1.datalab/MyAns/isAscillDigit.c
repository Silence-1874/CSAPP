/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
    int b1 = (x >> 4) ^ 0x3;
    int b2 = x >> 8;
    int y = x + 6;
    int b3 = (y >> 4) ^ 0x3;
    return !(b1 | b2 | b3);
}