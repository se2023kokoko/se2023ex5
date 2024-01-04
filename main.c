// 2の6乗を計算する。
#include <stdio.h>

int main(void) {
  int result = 1;
  int roop;
  for (roop = 6; roop > 0; roop--) {
    result *= 2;
  }
  printf("%d\n", result);
  return 0;
}
