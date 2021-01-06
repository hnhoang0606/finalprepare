#include "ui.h"

void ui :: CreateMember()
    {
        MemberData memberData("Member.txt");
        Member member;
        cout <<" Enter Name";
        string s;
        cin >> s;
        member.SetMemberName(s);
        cout << " Member Id";
        int i;
        cin >> i;
        member.GetMemberID(i);
        memberData.Pushback("member");
        memberData.Export("Member.txt");
    }

void ui :: DisplayMemberData()
{
    MemberData memberData("Member.txt");
    for (int i =0; i < memberData.Getsize(); i ++)
    {
        Member member = memberData.Get(i);
        cout << member.GetMemberID()<<" " << member.GetName()<<endl;
    }
}

void ui :: EditMemberData()
{   
    int i;
    MemberData memberData("Member.txt");
    cout << "Chon Id of table you want to editt" <<endl;
    cin i; i--;
    Member member = memberData.Get(i);
    cout<< "Choose information that you want to edit"<<endl;

    cout << "1. GetMemberID"<<endl;
    cout << "2. GetName" <<endl;
    int choose, yourcase;
    cin >> choose;

    switch (choose)
    {
    case 1:
        cout<<" Enter GetMemberID ";
        cin >> yourcase ;
        member.SetMemberID(yourcase);
        break;
    case 2 :
        cout<<" Enter GetName ";
        cin >> yourcase ;
        member.SetMemberName(yourcase);
        break;
    default:
        cout << " please Enter again" <<endl;
        break;
    }
    memberData.Get(i) = member;
    memberData.Export("Member.txt");
}

void ui :: DeleteMemberData()
{
    MemberData memberData("Member.txt");
    Member member;
    cout << "Chon Id of table you want to Delete" <<endl;
    cin i; i--;
}