// 2の6乗を計算する。
#include <stdio.h>
int f1(int roop, int result);
int f1(int roop, int result) {
  if (roop < 1) {
    return result;
  } else {
    return f1(roop - 1, 2 * result);
  }
}
int main(void) {
  int roop = 6;
  int result = 1;
  printf("%d\n", f1(roop, result));
  return 0;
}
