#ifndef _Object_Book_H
#define _Object_Book_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
    int BookID;
    string BookName;
    int Price ;
    
    public:
        Book();
        Book(int bookid , string bookname, int price);
        int GetBookID();
        string GrtBookName();
        int GetPrice();
        void SetBookID(int Id);
};

#endif