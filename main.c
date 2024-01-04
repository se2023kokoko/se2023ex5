// 2の6乗を計算する。
#include <stdio.h>
int f1(int roop, int result, int tei);
int jijou(int n);

int f1(int roop, int result, int tei) {
  if (roop < 1) {
    return result;
  } else if (roop % 2 == 1) {
    return f1(roop - 1, tei * result, tei);
  } else {
    return f1(roop / 2, result, jijou(tei));
  }
}

int jijou(int n) { return n * n; }

int main(void) {
  int roop = 6;
  int result = 1;
  int tei = 2;
  printf("%d\n", f1(roop, result, tei));
  return 0;
}
