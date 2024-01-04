#pragma once
#include"string"

using namespace std;

class Gun{
public:
    Gun(string type):_bullet_count(0),_type(type){}

    void addBullet(int bullet_num);
    bool shoot();
    
private:
    int _bullet_count;
    string _type;
};

