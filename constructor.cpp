//copy constructor
#include<iostream>
using namespace std;
class abc
{
    public:
    int a,b;
     abc(int m,int n)
    {
        a=m;
        b=n;
    }
     abc(abc &T)
    {
    a=T.a;
    b=T.b;
    }
    void dis()
    {
        cout<<"the element is"<<a<<b;
    }
};
int main()
{
    abc obj(8,9);
    obj.dis();
    abc ayush(obj);
     ayush.dis();
     return 0;   
}
