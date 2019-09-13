#include <iostream>
#include <stdio.h>
using namespace std;

class jib{
public:
    void bache()
    {
        printf("Jibon ache");
    }
};

class udvid:public jib
{
public:
    void ss()
    {
        printf("Khaddo toiri kore");
    }
};

class prani:public jib
{
public:
    void mvmnt()
    {
        printf("Cholte pare");
    }
};

class manush:public prani
{
public:
    void intl()
    {
        printf("Heavy buddhi");
    }
};

int main()
{
    manush o;
    o.intl();
    o.bache();
    o.mvmnt();
    return 0;
}
