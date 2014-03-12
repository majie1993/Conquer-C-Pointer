#include <stdio.h>

typedef struct 
{
	int int1;
	double double1;
	char char1;
	double double2;	
} Hoge;

int main(void)
{
	Hoge hoge;

	printf("hoge size...%lu\n", sizeof(Hoge));
	printf("int1 size...%lu\n", sizeof(int));
	printf("double1 size...%lu\n", sizeof(double));
	printf("char1 size...%lu\n", sizeof(char));

	printf("hoge...%p\n", &hoge);
	printf("int1...%p\n", &hoge.int1);
	printf("double1...%p\n", &hoge.double1);
	printf("char1...%p\n", &hoge.char1);
	printf("double2...%p\n", &hoge.double2);

	return 0;
}

/*
hoge size...32    // 这里在作者的机器上是24个字节，他的机器是4字节补全。我这里是8字节补全。
int1 size...4
double1 size...8
char1 size...1
hoge...0x7fff5e6d9118
int1...0x7fff5e6d9118
double1...0x7fff5e6d9120
char1...0x7fff5e6d9128
double2...0x7fff5e6d9130
*/