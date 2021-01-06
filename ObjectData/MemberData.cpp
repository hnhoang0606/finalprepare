#include"MemberData.h"

MemberData :: MemberData()
{

}

MemberData :: MemberData(std::string filename)
{
    MaxId = 0;
    _data.resize(0);
    ifstream FileIn(filename);
    int Number;
    FileIn >> Number;

    int MemberId;
    std::string Name;

    for (int i =0 ; i< Number; i++)
    {
        FileIn >> MemberId;
        FileIn >> Name;

        Member member (MemberId,Name);
        _data.push_back(member);
    }

    FileIn.close();
}

int MemberData :: Getsize()
{
    return _data.size();
}

Member MemberData :: Get(int i)
{
    return _data[i];
}

int MemberData :: GetMaxId()
{
    return MaxId;
}

int MemberData :: Export(std::string filename)
{
    ofstream Fileout (filename);
    Fileout << _data.size()<<endl;

    for (Member member : _data)
    {
        Fileout << member.GetMemberID();
        Fileout << member.GetName();
    }

    Fileout.close();
    return 0;
}

int MemberData :: Pushback(Member member)
{
    MaxId ++;
    _data.push_back(member);
    return MaxId;
}