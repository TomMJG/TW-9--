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

//初始化收银机
void initCashRegister(){
    //首次录入商品信息
    goods tempGoods;
//    cout<<"请输入商品编码：(输入完成后用-1结束)"<<endl;
//    while(cin>>tempGoods.barcode){
//        cout<<"商品名称：";
//        cin>>tempGoods.name;
//        cout<<"数量单位：";
//        cin>>tempGoods.unit;
//        cout<<"商品类别：";
//        cin>>tempGoods.category;
//        cout<<"商品子类别：";
//        cin>>tempGoods.subCategory;
//        cout<<"单价：";
//        cin>>tempGoods.price;
//        
//        totalGoods.push_back(tempGoods);
//    }
}

int main(int argc, const char * argv[]) {
    initCashRegister();
    
}
