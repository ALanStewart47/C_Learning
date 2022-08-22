#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//※※※※※※※※※※
//在程序中，最好用#define定义数值常量，用const关键字声明的变量为只读变量。
//在程序中使用符号常量（明示常量），提高了程序的可读性和可维护性。
// note: #define 和 const 的用法是有区别的，const的用法更多样，
// 具体可以参考：https://www.codersrc.com/archives/9123.html
//※※※※※※※※※※
//#define UART_BOUND 115200

//const unsigned int uart_number = 1;		//只读，无法修改



//int main(void)
//{
//    int age;
//    float assets;
//    char pet[30];
//
//    printf("Enter your age,assets,and favorite pet.\n");
//
//    scanf("%d %f", &age, &assets);
//
//    scanf("%s", pet);
//
//    printf("%d $%.2f %s\n", age, assets, pet);
//
//    return 0;
//}

//	printf()的*修饰符 ，
//	用于修饰 字段宽度 ，对应的*需要对应的参数指明
// 适合用于不同情况下，改变*对应的变量来打印不同长度的内容
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Enter a field width:\n");
//	scanf("%d",&width);
//	printf("the number is : %*d\n",width,number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d",&width,&precision);
//	printf("Weight = %*.*f\n",width,precision,weight);
//	printf("Done!\n");
//}

//	Scanf()的*修饰符
//	用于跳过相应的输入项，故也无需对应参数。
//int main(void)
//{
//	int n;
//
//	printf("Please enter three integers:\n");
//
//	scanf("%*d %*d %d",&n);
//
//	printf("The last integers was %d \n",n);
//
//	return 0;
//}


////输入-13.45e12#
//int main()
//{
//    int mode = 2;
//
//    int x;
//    float y;
//    char num3[1];
//
//    switch (mode)
//    {
//    case 1 :
//        scanf("%d", &x);
//        printf("%d\n", x);
//        break;
//    case 2:
//        scanf("%f", &y);
//        printf("%f\n", y);
//        break;
//    case 3:
//        scanf("%s", &num3);
//        printf("%s\n", num3);
//        break;
//
//    default:
//        break;
//    }
//
//
//    return 0;
//}


