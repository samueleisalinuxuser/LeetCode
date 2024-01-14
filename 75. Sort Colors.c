void sortColors(int* nums, int numsSize) {
    int redCounter = 0, whiteCounter = 0, blueCounter = 0;

    for(int i = 0; i < numsSize; i++) switch(nums[i]) {
        case 0:
            ++redCounter;
            break;
        case 1:
            ++whiteCounter;
            break;
        case 2:
            ++blueCounter;
            break;
    }

    for(int i = 0; i < numsSize; i++) {
        while(redCounter > 0) {
            nums[i] = 0;
            --redCounter;
            ++i;
        }
        while(whiteCounter > 0) {
            nums[i] = 1;
            --whiteCounter;
            ++i;
        }
        while(blueCounter > 0) {
            nums[i] = 2;
            --blueCounter;
            ++i;
        }
    }
}
