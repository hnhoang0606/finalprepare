#include "Book.h"

 Book :: Book()
 {

 }
        
Book :: Book(int bookid , string bookname, int price)
{
    BookID = bookid;
    BookName = bookname;
    Price =  price;
}

void Book :: SetBookID(int i)
{
    BookID = i;
}