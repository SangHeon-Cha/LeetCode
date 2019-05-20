#include <stdio.h>
#include <Windows.h>

void main()
{
	int imsi = 5;
	int *imsip;

	imsip = &imsi;

	printf("%d\n", imsi);

	printf("%#010x\n", &imsi);
	
	printf("%d\n", *imsip);

	printf("%#010x\n", imsip);
	printf("%#010x\n", &imsip);

	
	system("pause");
}