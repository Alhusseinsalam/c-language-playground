#include<stdio.h>

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(int v[], int left, int right) {
    int i, last;
    void swap(int v[], int i, int j);
    if (left >= right)
        return;

    swap(v, left, (left + right)/2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }

    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);

}

int main() {
    int unsortedArr[] = {5,4,6,1,2,7,845,12,46,7,232,66,34,676,36,76,4,23,556,345};
    printf("Size of array: %ld", sizeof(unsortedArr));
    qsort(unsortedArr, 0, sizeof(unsortedArr));
    return 0;
}