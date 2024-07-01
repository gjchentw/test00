#include <stdio.h>

int main(void) {

    char a[128];
    int t;

    do {
      t = scanf("%s", a);

      if (t == EOF) {
        break;
      }

      printf("%s", a);
    } while(1);

    return 0;
}