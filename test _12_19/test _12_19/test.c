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
//	printf("%d\n", strlen(arr1));//stelen -string length--�����ַ�������
//	printf("%d\n", strlen(arr2));//arr2�����ֵ,��Ϊ��֪��ʲôʱ��/0
//	return  0;
//}








//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
//	//
//	char arr1[] = "abc";//����
//	//"abc" --'a''b''c''\0'�ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	//'0' -0
//	//'a' -97
//	//ASCII ��
//	printf( "%s\n", arr1 );
//	printf("%s\n",arr2);
//	return 0;
//}