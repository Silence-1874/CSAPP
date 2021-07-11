/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
    //get Tmin
    int t = 1 << 31;
    //get x's sign (+:1 -:0)
    int xs = !(t & x);
    //get y's sign (+:1 -:0)
    int ys = !(t & y);
    //judge xs == ys (0/1)
    int s1 = xs ^ ys;
    //get y - x
    int c = ~x + 1 + y;
    //get (y - x))'s sign (+:1 -:0)
    int s2 = !(t & c);
    int j1 = !xs & ys & s1;
    int j2 = !s1 & s2;
    return j1 | j2;
}