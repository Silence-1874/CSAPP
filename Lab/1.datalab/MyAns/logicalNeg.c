/* 
 * logicalNeg - implement the ! operator, using all of 
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int logicalNeg(int x) {
    int a = ~x;
    int b = a + 1;
    int as = (a >> 31) & 1;
    int bs = (b >> 31) & 1;
    return (as ^ bs) & as;
}