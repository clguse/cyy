#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{

	int  sum = 0;
	sum = Add(3,5);
	printf("sum =%d\n", sum);
	return 0;
}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//stelen -string length--计算字符串长度
//	printf("%d\n", strlen(arr2));//arr2是随机值,因为不知道什么时候到/0
//	return  0;
//}








//int main()
//{
//	//数据在计算机上存储的时候，存储的是二进制
//	//
//	char arr1[] = "abc";//数组
//	//"abc" --'a''b''c''\0'字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	//'0' -0
//	//'a' -97
//	//ASCII 码
//	printf( "%s\n", arr1 );
//	printf("%s\n",arr2);
//	return 0;
//}