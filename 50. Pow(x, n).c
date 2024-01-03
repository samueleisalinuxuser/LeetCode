/* Default function declaration:
 * double myPow(double x, int n)
 */
double myPow(double x, double n) {
    double result = 1.f;
    int nCopy = n;

    n = (n < 0)? (-1)*n : n;

    while(n > 0){
        if((int)n % 2 == 0){
            n /= 2;
            x *= x;
        } else{
            --n;
            result *= x;
        }
    }

    result = (nCopy < 0)? 1.f / result : result;
    return result;
}
