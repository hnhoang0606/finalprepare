#ifndef _Object_Bookreturn_H_
#define  _Object_Bookreturn_H_
#include <iostream>
#include <iostream>
using namespace std;

class Bookreturn
{
    int BorrowReturnID;
    int MemberID;
    int BrowwReturn;
    string date;
    public :
        Bookreturn();
        Bookreturn(int borrowreturn, int memberid, int browreturn, string date);
        int GetBorrowReturn();
        int GetMemberID();
        int GetBrowwReturn();
        string Getdate();
        int SetBorrowReturn(int i);
        int SetMemberID(int i);
        int SetBrowwReturn(int i);
        string Setdate(string s);
};

#endif