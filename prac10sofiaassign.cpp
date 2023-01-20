#include <iostream>
using namespace std;
class Sofia
{
    private:
    float n1, n2, res;
    public:
    void divi()
    {
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        res=n1/n2;
        cout<<"a/b is: "<<res<<endl;
    }
};

int main()
{
    Sofia s;
    s.divi();
    return 0;
}
