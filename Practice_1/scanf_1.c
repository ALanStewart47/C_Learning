#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������������������
//�ڳ����У������#define������ֵ��������const�ؼ��������ı���Ϊֻ��������
//�ڳ�����ʹ�÷��ų�������ʾ������������˳���Ŀɶ��ԺͿ�ά���ԡ�
// note: #define �� const ���÷���������ģ�const���÷���������
// ������Բο���https://www.codersrc.com/archives/9123.html
//��������������������
//#define UART_BOUND 115200

//const unsigned int uart_number = 1;		//ֻ�����޷��޸�



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

//	printf()��*���η� ��
//	�������� �ֶο�� ����Ӧ��*��Ҫ��Ӧ�Ĳ���ָ��
// �ʺ����ڲ�ͬ����£��ı�*��Ӧ�ı�������ӡ��ͬ���ȵ�����
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

//	Scanf()��*���η�
//	����������Ӧ���������Ҳ�����Ӧ������
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


////����-13.45e12#
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


