//Problem 1295;
int findNumbers(int* nums, int numsSize) {

    int c = 0;

    for (int i = 0; i < numsSize; i++) {

        int num = nums[i];
        int d = 0;

        while (num != 0) {
            d++;
            num = num / 10;
        }

        if (d % 2 == 0) {
            c++;
        }
    }

    return c;
}

