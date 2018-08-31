//============================================================================
// Name        : Code.cpp
// Author      : orange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    map<int, string> mapStudent;
    mapStudent.insert(pair<int, string>(1, "student_one"));
    //mapStudent.insert(pair<int, string>(1, "student_one22"));
    //mapStudent[1]="sssff";
    //mapStudent[1]="sssfsafaf";
    mapStudent.insert(pair<int, string>(2, "student_two"));
    mapStudent.insert(pair<int, string>(3, "student_three"));
    map<int, string>::iterator  iter;
    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    system("pause");
    return 0;
}
