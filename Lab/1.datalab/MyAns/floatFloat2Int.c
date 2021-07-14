/* 
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf) {
    int s = uf >> 31;
    int e = (((uf << 1) & 0xff000000) >> 24) - 127;
    int f = uf & 0x007fffff;
    unsigned result;

    if (e < 0 || uf == 0) {
        return 0;
    }

    if (e >= 32) {
        return 0x80000000;
    }
    
    result = ((f >> 23) + 1) << e;
    if (s == 1) {
        result = ~result + 1;
    }
    return result;
}
