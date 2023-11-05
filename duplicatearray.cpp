#include <stdio.h>

int main() {
    int i, j, n, k, s, h;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    int b[n];

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &k);
        a[i] = k;
    }

    s = 0;
    for (i = 0; i < n; i++) {
        h = 0;
        for (j = 0; j < s; j++) {
            if (a[i] == b[j]) {
                h = 1;
                break;
            }
        }
        if (h == 0) {
            b[s] = a[i];
            s += 1;
        }
    }

    for (i = 0; i < s; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
				
				
		
