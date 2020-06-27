//
//  time.cpp
//  test
//
//  Created by Henry on 2020/6/27.
//  Copyright © 2020 Henry. All rights reserved.
//

#include "time.hpp"
#include <iostream>
#include <ctime>
using namespace std;

void time(){
    time_t now = time(0);  //基于当前系统的当前日期/时间, 时间戳
    char* dt = ctime(&now);   // 把 now 转换为字符串形式，字符串时间
    cout << "local time: " << dt << endl;
    tm *gmtm = gmtime(&now);   // 把 now 转换为 tm 结构
    dt = asctime(gmtm);
    cout << "now: " << now << endl << "tm: " << dt << endl;
    
}


void format( )
{
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    cout << "1970 到目前经过秒数:" << now << endl;
    tm *ltm = localtime(&now);
    // 输出 tm 结构的各个组成部分
    cout << "年: "<< 1900 + ltm->tm_year << endl;
    cout << "月: "<< 1 + ltm->tm_mon<< endl;
    cout << "日: "<<  ltm->tm_mday << endl;
    cout << "时间: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    printf("%d-%d-%d %d:%d:%d\n", 1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday, ltm->tm_hour, ltm->tm_min,  ltm->tm_sec);
    
}
