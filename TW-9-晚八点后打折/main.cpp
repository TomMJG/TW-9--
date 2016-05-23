//
//  main.cpp
//  TW-9-晚八点后打折
//
//  Created by 马家固 on 16/5/21.
//  Copyright © 2016年 马家固. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "cashRegister.h"
using namespace std;

void showOperationInfo();//显示操作信息
void operation(int num);

int main() {
    cout<<"欢迎使用商店收银系统"<<endl;
    cash.initCash();
A:
    int choose;
    showOperationInfo();
    if(cin>>choose){
        operation(choose);
        goto A;
    }
    
    return 0;
}

void showOperationInfo(){
    cout<<"1、扫描商品"<<endl;
    cout<<"2、修改折扣时间段"<<endl;
    cout<<"3、修改折扣"<<endl;
    cout<<"4、增加新的商品"<<endl;
    cout<<"5、删除商品"<<endl;
    cout<<"6、退出系统"<<endl;
}

void operation(int num){
    switch (num) {
        case 1:
        {
            //首先处理传进来的顾客购物信息
            string shoppingInfo;
            cin>>shoppingInfo;
        }
            cout<<cash.calPrice()<<endl;
        case 2:
            
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;
    }
}