int removeDuplicates(int* nums, int numsSize) {
    /* k: number of unique elements
     * k is initialized to one to count the first number of nums
     */
    int k = 1;
    

    /* nsni: nums same number index
     * nlei: nums last element index
     */
    int nsni = 1, nlei = 0;
    /* Starting from the second element of nums for avoiding
     * exceeding nums allocated space when checking its elements
     */
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > nums[nlei]){
            ++k; // Found another non duplicate number
            ++nlei; // Increasing nums last element index by one
            nums[nlei] = nums[i]; // Copying the new found element near the other elements found
        } else ++nsni; // nums[i] is equal to the previous number so nums same number index is increased by one
    }

    // Cleaning nums left space
    for(int i = k; i < numsSize; i++) nums[i] = 0;

    return k;
}
