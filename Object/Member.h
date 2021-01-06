#ifndef _Object_Member_H_
#define _Object_Member_H_
#include <iostream>
#include <string>
using namespace std;

class Member
{
    int MemberId;
    std::string Name;
    public:
        Member();
        Member(int memberID, std::string name);
        int GetMemberID();
        string GetName();
        void SetMemberID(int i);
        void SetMemberName(string s);

};
#endif