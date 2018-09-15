//
//  main.cpp
//  Armstrong數
//
//  Created by 張宇宏 on 2016/4/10.
//  Copyright © 2016年 張宇宏. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

 int main (){
     int ones      =0,//個位
         tens      =0,//十位
         hundreds  =0,//百位
         armstrong =0;//armstrong數
     
     for(armstrong=100;armstrong<1000;armstrong++){
                                                    ones=armstrong%10;
                                                    tens=(armstrong%100)/10;
                                                    hundreds=armstrong/100;
         if(armstrong==hundreds*hundreds*hundreds+tens*tens*tens+ones*ones*ones){
                                                                                    printf("%d是armstrong數\n",armstrong);
                                                                                 }
                                                    }
     system("pause");
     return(0);
                }