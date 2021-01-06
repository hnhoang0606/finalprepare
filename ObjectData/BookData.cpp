#include "BookData.h"

BookData :: BookData ()
{
    _data.resize(0);
    MaxID = 0;
}

BookData :: BookData(string filename)
{
    MaxID =0;
    _data.resize(0);
    ifstream fileIn(filename);
    int Number;
    fileIn >> Number;
    
    int BookID;
    string BookName;
    int Price ;
    
    for(int i=0; i<Number; i++)
    {
        fileIn >> BookID;
        fileIn >> BookName;
        fileIn >> Price;

        Book book(BookID, BookName, Price);
        _data.push_back(book);
    }
    fileIn.close();
}

int BookData :: GetSize()
{
    return _data.size();
}

Book BookData :: Get(int i)
{
    return _data[i];
}

int BookData :: PushBack(Book book)
{ 
    MaxID ++;
    _data.push_back(book);
    return MaxID;

}

int BookData :: Export(string filename)
{
    ofstream fileOut(filename);
    fileOut << _data.size() <<endl;
    for(Book book: _data)
    {
        fileOut << book.GetBookID();
        fileOut << book.GetPrice();
        fileOut << book.GrtBookName();
    }

    fileOut.close();
    return 1;
}
