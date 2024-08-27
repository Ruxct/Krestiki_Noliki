#include <stdio.h>
#include <stdlib.h>

// Функция sortedSquares, которая уже у вас есть
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int i, j, temp;
    
    int* result = (int*)malloc(numsSize * sizeof(int));
  
    for (i = 0; i < numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }
    
    for (i = 0; i < numsSize - 1; ++i) {
        for (j = 0; j < numsSize - 1 - i; ++j) {
            if (result[j] > result[j + 1]) {
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
    
    *returnSize = numsSize;
    return result;
}

int main() {
    // Ввод данных
    int nums[] = {-7, -3, 2, 3, 11};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    // Вызов функции sortedSquares
    int* result = sortedSquares(nums, numsSize, &returnSize);

    // Вывод результата
    printf("Отсортированные квадраты: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Освобождение выделенной памяти
    free(result);

    return 0;
}
