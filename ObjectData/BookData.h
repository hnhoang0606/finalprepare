#ifndef _Object_BookData_H_
#define _Object_BookData_H_

#include <fstream>
#include <iostream>
#include <vector>
#include "../Object/Book.h"
using namespace std;

class BookData 
{
    vector <Book> _data;
    int MaxID;

    public:
        BookData();
        BookData(string filename);
        int GetSize();
        Book Get(int i);
        int PushBack(Book student);
        int Export(string filename);

};
#endif