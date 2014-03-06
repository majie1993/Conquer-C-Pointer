#include <stdio.h>
#include <stdarg.h>
#include <assert.h>

void tiny_printf(char *format, ...)
{
  int i;
  va_list ap; // 使得平台无关，bsd上是个char *

  va_start(ap, format); // 使指针ap指向format下一个位置,也就是第一个输入

  for (i=0; format[i]!='\0'; i++) {
    switch (format[i]) {
      case 's':
        printf("%s ", va_arg(ap, char *));
        break;
      case 'd':
        printf("%d ", va_arg(ap, int));
        break;
      default:
        assert(0);
    }
  }
  va_end(ap); // 配套va_start使用，实际没什么用
  putchar('\n');
}

int main(void)
{
  tiny_printf("sdd", "result", 3, 5);

  return 0;
}
