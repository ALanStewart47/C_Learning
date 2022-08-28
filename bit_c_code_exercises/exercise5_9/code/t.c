//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n",arr[5]);
//
//	return 0;
//}
// 
// 

/**********STRUCT*****************/
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//}book1;
//
//int main()
//{
//	int num = 10;
//	struct Book b = {"CÓïÑÔ","C20220828",55};
//	struct Book* pd = &b;
//
//	printf("Book name:%s\n",pd->name);
//	printf("ID number:%s\n", pd->id);
//	printf("cost:%d\n",pd->price);
//
//	printf("%s\n", b.name);
//	printf("%s\n",b.id);
//	printf("%d\n",b.price);
//
//	printf("%s\n", (*pd).name);
//	printf("%s\n",(*pd).id);
//	printf("%d\n", (*pd).price);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int c = a + b * 7;
//	return 0;
//
//}

int main()
{
	char a = 3;
	//0000 0011
	char b = 127;
	//01111111

	char c = 0;
	c = a + b;
	//0000 0011
	//0111 1111
	//

	printf("%d\n", c);

	return 0;
}