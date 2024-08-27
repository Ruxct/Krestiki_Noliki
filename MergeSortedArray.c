#include <stdio.h>

void BubbleSort(int a[], int array_size) {
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i) {
        for (j = 0; j < array_size - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int a = n + m;
    
    // Скопировать элементы из nums2 в nums1
    for (int i = 0; i < nums2Size; i++) {
        nums1[m + i] = nums2[i];
    }
    
    BubbleSort(nums1, a);
}

int main() {
    // Ввод данных
    int nums1[10] = {1, 3, 5, 0, 0, 0};  // nums1 имеет размер 10, но задействованы только первые m элементов
    int nums2[] = {2, 4, 6};  // nums2 имеет n элементов
    int m = 3;  // Количество значимых элементов в nums1
    int n = 3;  // Количество элементов в nums2

    // Вызов функции merge
    merge(nums1, m + n, m, nums2, n, n);

    // Вывод результата
    printf("Объединенный и отсортированный массив: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
