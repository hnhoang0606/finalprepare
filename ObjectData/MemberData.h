#ifndef _ObjectData_MemberData_H_
#define _ObjectData_MemberData_H_
#include<vector>
#include<iostream>
#include<fstream>
#include <string>
#include "../Object/Member.h"
using namespace std;


class MemberData
{
    vector<Member> _data ;
    int MaxId = 0;

    public :

        MemberData();
        MemberData(std::string filename);
        int Getsize();
        int GetMaxId();
        Member Get(int i);
        int Export(std::string filename);
        int Pushback(Member member);

};
#endif