/**
 * 程序说明了这几种类型的变量在内存中放的地址
 &func1...0x10e588d70
 &func2...0x10e588db0
 string literal...0x10e588f48
 &global_variable...0x10e589028
 &file_static_variable...0x10e589024
 &func1_variable...0x7fff51677108
 &func1_static_variable...0x10e589020
 &func2_variable...0x7fff5167710c
 malloc address...0x7f9e98403ac0
 */
#include <stdio.h>
#include <stdlib.h>

int global_variable;
static int file_static_variable;

void func1(void)
{
  int func1_variable;
  static int func1_static_variable;

  printf("&func1_variable...%p\n", &func1_variable);
  printf("&func1_static_variable...%p\n", &func1_static_variable);
}

void func2(void)
{
  int func2_variable;

  printf("&func2_variable...%p\n", &func2_variable);
}

int main(void)
{
  int *p;

  // 函数指针
  printf("&func1...%p\n", func1);
  printf("&func2...%p\n", func2);

  // 字符串常亮
  printf("string literal...%p\n", "abc");

  // 全局变量
  printf("&global_variable...%p\n", &global_variable);

  // 文件内static变量
  printf("&file_static_variable...%p\n", &file_static_variable);

  // 局部变量
  func1();
  func2();

  p = malloc(sizeof(int));
  printf("malloc address...%p\n", p);

  return 0;
}
