#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n];
    long long pref[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    pref[0] = a[0];

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    printf("Prefix Sum Array:\n");

    for (int i = 0; i < n; i++) {
        printf("%lld ", pref[i]);
    }

    printf("\n");

    return 0;
}
