//
//  cashRegister.h
//  TW-9-晚八点后打折
//
//  Created by 马家固 on 16/5/21.
//  Copyright © 2016年 马家固. All rights reserved.
//
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

//商品
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
    //打折的时间段
    int beginDiscountTime;
    int endDiscountTime;
    vector<goods> current;
public:
    cashRegister(){
        discountTime = false;
    }
    double calPrice() {
        //获取系统时间，判断是否处于优惠时间段
        time_t tt = time(NULL);
        tm* t = localtime(&tt);
        printf("%02d\n",t->tm_hour);
        if(t->tm_hour >= 20){
            discountTime = true;
        }
        double totalPrice = 0.0;
        
        for(int i=0;i<current.size();i++){
            if(discountTime){
                totalPrice += (current[i].price)*
            }
        }
        return totalPrice;
    }
};

//商店总的商品
vector<goods> totalGoods;
//现在收银机扫描到的barcode
vector<string> currentGoods;
//全局收银机对象
cashRegister cash = cashRegister();