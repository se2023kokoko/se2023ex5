// 2の6乗を計算する。
#include <stdio.h>

int main(void) {
  int result = 1;
  int roop = 6;
  while (roop > 0) {
    result *= 2;
    roop--;
  }
  printf("%d\n", result);
  return 0;
}
