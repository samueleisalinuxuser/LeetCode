bool isPalindrome(long int x) {
    long int xCopy = x, reversedX = 0, remainder = 0;
    while(xCopy > 0){
        remainder = xCopy % 10;
        reversedX = reversedX * 10 + remainder;
        xCopy /= 10;
    }

    if(x == reversedX) return true;
    else return false;
}
