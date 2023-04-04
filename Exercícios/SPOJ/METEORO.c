#include <stdio.h>

int main() {
    int x1, y1, x2, y2, n, x, y, count;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while (x1 != 0 && y1 !=0 && x2 != 0 && y2 != 0) {
        scanf("%d", &n);

        count = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);

            if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
                count++;
            }
        }

        printf("%d\n", count);

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }

    return 0;
}