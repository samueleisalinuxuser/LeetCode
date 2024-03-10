int removeElement(int* nums, int numsSize, int val) {
    if(numsSize > 0) {
        int numsCopy[numsSize], k = 0;
    
        for(int i = 0; i < numsSize; i++) numsCopy[i] = nums[i];

        for(int i = 0; i < numsSize; i++) if(numsCopy[i] != val){
            nums[k] = numsCopy[i];
            ++k;
        }
    
        return k;
    } else return 0;
}
