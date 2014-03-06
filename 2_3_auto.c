/*
 * 在自动变量(也就是int a这些)区域的上方，栈不断增长
 * 参数是从后向前堆入栈的
 * main:&a...0x7fff52c71108 &b...0x7fff52c71104
 * func:&a...0x7fff52c710ec &b...0x7fff52c710e8
 * func:&c...0x7fff52c710e4 &d...0x7fff52c710e0
 */
#include <stdio.h>

void func(int a, int b)
{
  int c, d;

  printf("func:&a...%p &b...%p\n", &a, &b);
  printf("func:&c...%p &d...%p\n", &c, &d);
}

int main(void)
{
  int a, b;

  printf("main:&a...%p &b...%p\n", &a, &b);
  func(1, 2);

  return 0;
}
