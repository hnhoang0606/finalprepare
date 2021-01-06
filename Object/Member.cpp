#include "Member.h"

Member :: Member()
{

}

Member :: Member(int memberID, std::string name)
{
    MemberId = memberID;
    Name = name;
}

 int Member :: GetMemberID()
 {
     return MemberId;
 }

 string Member :: GetName()
 {
     return Name;
 }

 void Member :: SetMemberID(int i)
 {
     MemberId = i;
 }

void Member :: SetMemberName(string i)
 {
     Name = i;
 }

 