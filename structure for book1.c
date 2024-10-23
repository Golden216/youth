#include <stdio.h>
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
	
	}book,book1;
int main()
{
	
	strcpy(book1.title,"introduction to c programming");
	strcpy(book1.author,"jonh smith");
	book1.publication_year=2022,
	strcpy(book1.ISBN,"9780131103627");
	book1.price=49.99;
	
	printf("title: %s\n",book1.title);
	printf("Author:%s\n",book1.author);
	printf("Publication Year,%d\n",book1.publication_year);
	prinf("ISBN:%s\n",book1.ISBN);
	printf("Price:%f\n",book1.price);
	
	
	return 0;
}