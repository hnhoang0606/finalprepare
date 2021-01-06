#include "BorrowData.h"

BookreturnData :: BookreturnData ()
{

}

BookreturnData :: BookreturnData (string filename)
{
    MaxId =0;
    _data.resize(0);
    ifstream FileIn(filename);
    int NumberOject;
    FileIn >> NumberOject;

    int BorrowReturnID;
    int MemberID;
    int BrowwReturn;

    for (int i =0 ; i< NumberOject ; i++)
    {
        FileIn >> BorrowReturnID;
        FileIn >> MemberID;
        FileIn >> BrowwReturn;

        Bookreturn Bookreturn(BorrowReturnID,MemberID,BrowwReturn );
        _data.push_back(Bookreturn);
    }

}