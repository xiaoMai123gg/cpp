#include "Solider.h"
#include <iostream>

void test()
{
    Solider sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
}
 
int main()
{
    std::cout<<"this is a test string..."<<std::endl;
    test();
    return 0;
}