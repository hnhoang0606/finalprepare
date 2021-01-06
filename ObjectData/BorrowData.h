#ifndef _BorrowData_H_
#define _BorrowData_H_
#include <vector>
#include <iostream>
#include <fstream>
#include "../Object/Bookreturn.h"
using namespace std;

class BookreturnData
{
    vector<Bookreturn> _data;
    int MaxId;

    public:

        BookreturnData ();
        BookreturnData (string filename);
        int GetSize();
        Bookreturn Get();
        int Export();


        


}