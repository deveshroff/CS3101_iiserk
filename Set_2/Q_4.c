#include<stdio.h>

int book_1 =0, book_2 = 0, book_3 = 0;

int updateStockbook_1()
{
	book_1++;
	printf("The current stock of book 1 is %d.\n", book_1);
}
int updateStockbook_2()
{
	book_2++;
	printf("The current stock of book 2 is %d.\n", book_2);
}
int updateStockbook_3()
{
	book_3++;
	printf("The current stock of book 3 is %d.\n", book_3);
}
int main()
{
	updateStockbook_1();
	updateStockbook_1();
	updateStockbook_2();
	updateStockbook_3();
	updateStockbook_3();
	updateStockbook_1();
	updateStockbook_2();
	updateStockbook_2();
	updateStockbook_1();
	updateStockbook_3();
	updateStockbook_1();
	
}
