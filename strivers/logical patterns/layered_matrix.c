#include <stdio.h>

int main() {
    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int min = top;
            if (bottom < min) min = bottom;
            if (left < min) min = left;
            if (right < min) min = right;

            int val = n - min;

            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}
