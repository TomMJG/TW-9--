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

//商店总的商品
vector<goods> totalGoods;
//现在收银机扫描到的barcode
vector<string> currentGoods;
//保存购买的每个商品的数量
vector<double> currentGoodsNum;

class cashRegister {
private:
    bool discountTime;//是否处于打折时间
    //打折的时间段
    int beginDiscountTime;
    int endDiscountTime;
    //折扣
    double discount;
    vector<goods> current;
public:
    cashRegister(){
        discountTime = false;
    }
    
    //初始化收银机
    void initCash(){
        //录入商店的商品信息
        
    }
    
    //修改折扣时间
    void modifyDiscountTime(){
        cout<<"输入折扣开始的时间：";
        cin>>beginDiscountTime;
        cout<<"折扣结束的时间：";
        cin>>endDiscountTime;
        cout<<"修改成功"<<endl;
    }
    
    //修改折扣价格
    void modifyDiscount(){
        cout<<"输入新的折扣：";
        cin>>discount;
        cout<<"新折扣设置成功"<<endl;
    }
    
    //计算价格
    double calPrice() {
        //获取系统时间，判断是否处于优惠时间段
        time_t tt = time(NULL);
        tm* t = localtime(&tt);
        printf("%02d\n",t->tm_hour);
        
        if(t->tm_hour >= beginDiscountTime && t->tm_hour <= endDiscountTime){
            discountTime = true;
        }
        double totalPrice = 0.0;
        
        for(int i=0;i<current.size();i++){
            if(discountTime){
                totalPrice += (current[i].price*currentGoodsNum[i]*discount);
            } else {
                totalPrice += (current[i].price*currentGoodsNum[i]);
            }
        }
        return totalPrice;
    }
};

//全局收银机对象
cashRegister cash = cashRegister();