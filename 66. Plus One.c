/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int *returnArray = (int *)malloc(sizeof(int) * (*returnSize));

    bool carryOverDigit = true;

    for(int i = digitsSize - 1; i >= 0; i--) {
        if(carryOverDigit) {
            returnArray[i] = ++digits[i];
            carryOverDigit = false;
        } else returnArray[i] = digits[i];

        if(returnArray[i] >= 10) {
            returnArray[i] -= 10;
            carryOverDigit = true;
        }
    }

    if(carryOverDigit) {
        ++(*returnSize);
        int* returnArrayExtended = realloc(returnArray, sizeof(int) * (*returnSize));
        returnArray = returnArrayExtended;
        memmove(returnArray + 1, returnArray, *returnSize);

        /* I must admit I'm not sure why this happens but when I use memmove the last element of the array is not zero as it should be,
         * the quickest fix I can think of is to reassign it to zero
         */
        returnArray[*returnSize - 1] = 0;
        
        returnArray[0] = 1;
    }

    return returnArray;
}
