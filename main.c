// 2の6乗を計算する。
#include <stdio.h>
int f1(int roop);
int f1(int roop) {
  if (roop < 1) {
    return 1;
  } else {
    return 2 * f1(roop - 1);
  }
}
int main(void) {
  int roop = 6;
  printf("%d\n", f1(roop));
  return 0;
}
