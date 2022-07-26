#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>

/**
 * @brief  this struct declare tag name Book, 'struct tag' can declare variable
 * @note   
 * @retval None
 */
struct Book
{
    /* data */
    char name[20];
    int price;     
};

struct Book book1;


/**
 * @brief  this struct does not declare tag ,so it is created a number variable of structure
 * @note   
 * @retval None
 */
struct 
{
    int x;
    int y;
}number;



int main()
{
    number.x = 1;
    number.y = 100;

    strcpy(book1.name, "C primer plus");
    book1.price =55;

    printf("Book name: %s\n", book1.name);
    printf("Book price: %d\n", book1.price);

    printf("number x is %d\n", number.x);
    printf("number y is %d\n",number.y);

    

}


