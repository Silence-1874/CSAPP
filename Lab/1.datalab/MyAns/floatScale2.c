/* 
 * floatScale2 - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned floatScale2(unsigned uf) {
    unsigned int s = uf & 0x80000000;
    unsigned int e = uf & 0x7f800000;
    unsigned int f = uf & 0x007fffff;
    if (e == 0x7f800000) {
        return uf;
    }

    if (e == 0) {
        return s + e + (f << 1);
    }

    e = e + 0x800000;
    if (e == 0x7f8000) {
        f = 0;
    }
    return s + e + f;
}