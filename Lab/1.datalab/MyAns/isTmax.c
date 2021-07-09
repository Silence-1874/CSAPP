/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
    int a = x + 1; //需要排除-1的情况
    int b = !a;
    int y = x + (x + 1);
    return !(y + 1 + b);
}