#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int days[n];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &days[i]);

        if (days[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even:%d Odd:%d", evenCount, oddCount);

    return 0;
}
