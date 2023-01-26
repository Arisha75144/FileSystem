//
// Created by Arina on 25.01.2023.
//

#ifndef FILESYSTEM_FILE__H
#define FILESYSTEM_FILE__H
#include<vector>
#include <cstdio>
#include<string>

class File_ {
private:
    std::vector<int>_dates;//data of file
    std::string _Name;
public:

    explicit File_(std::vector<int> inData, std::string nam):
    _dates(std::move(inData)),
    _Name(std::move(nam))
    {}


    size_t  GetSize() const{
        return _dates.size();
    }
//    const void * GetData() const;

    std::string GetName(){
        return _Name;
    }

};


#endif //FILESYSTEM_FILE__H
