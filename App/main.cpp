//
// Created by Arina on 25.01.2023.
//
#include <iostream>
#include <functional>
#include <thread>
#include <memory>
#include <fstream>
#include<vector>
//TODO connect with filesystem
int main(){
    std::vector<int>a;
    for (int i=0;i<1000;i++){
        a.push_back(2);
    }
    size_t dataBytes = a.size() * sizeof(int);
    const size_t blockSize= 50;
    const size_t blockCount = dataBytes/blockSize;

    for (size_t i=0;i<blockCount;i++){
        std::ofstream block (std::to_string(i)+"block");
        block.write(reinterpret_cast<const char*>(a.data())+i*blockSize,
                std::min(blockSize,dataBytes));
        dataBytes-=blockSize;
    }

}