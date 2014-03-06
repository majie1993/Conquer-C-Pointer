/*
 * 打开两个终端执行同样代码，第一次输出的地址是相同的
 */
#include <stdio.h>

int main(void)
{
  int hoge;
  char buf[256];

  printf("&hoge...%p\n", &hoge);
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &hoge);

  while (1) {
    printf("hoge...%d\n", hoge);
    getchar();
    hoge++;
  }

  return 0;
}
