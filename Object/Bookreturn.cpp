#include "Bookreturn.h"

Bookreturn :: Bookreturn()
{

}

Bookreturn :: Bookreturn(int borrowreturn, int memberid, int browreturn, string date)
{
     BorrowReturnID = borrowreturn;
     MemberID = memberid;
     BrowwReturn = browreturn;
     date = date;
}
int Bookreturn :: GetBorrowReturn()
{
    return BorrowReturnID;
}
int Bookreturn :: GetMemberID()
{
    return MemberID;
}
int Bookreturn :: GetBrowwReturn()
{
    return BrowwReturn;
}
string Bookreturn :: Getdate()
{
    return date;
}
void Bookreturn :: SetBorrowReturn(int i)
{
    BorrowReturnID = i;
}

void  Bookreturn :: SetMemberID(int i)
{
    MemberID = i;
}
void  Bookreturn :: SetBrowwReturn(int i)
{
    BrowwReturn = i;
}
void  Bookreturn ::Setdate(string s)
{
    date = s;
}