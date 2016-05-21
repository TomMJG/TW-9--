//
//  main.cpp
//  TW-9-晚八点后打折
//
//  Created by 马家固 on 16/5/21.
//  Copyright © 2016年 马家固. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
struct goods{
    string barcode;
    string name;
    string unit;
    string category;
    string subCategory;
    double price;
};

class cashRegister {
private:
    bool discountTime;//是否处于打折时间
    
public:
    cashRegister(){
        discountTime = false;
    }
    double calPrice() {
        double totalPrice = 0.0;
        return totalPrice;
    }
};

void initCashRegister(string path){
    
}

int main(int argc, const char * argv[]) {
    string pricePath;
    cout<<"请输入商品价格的文件目录，进行收银机的设置："<<endl;
    cin>>pricePath;
    initCashRegister(pricePath);
    
    
}
