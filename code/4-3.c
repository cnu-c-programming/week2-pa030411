#include <stdio.h>

int main()
{
      int n;
    scanf("%d", &n);
    int is_prime = 1;
    if(n <= 1) is_prime = 0;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    printf(is_prime ? "true\n" : "false\n");

    return 0;
}

