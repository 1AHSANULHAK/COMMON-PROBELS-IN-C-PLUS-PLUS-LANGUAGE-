#include<iostream>
using namespace std;
int main()
{
    geeks s;
    s.getdata();
    s.putdaata();
}
class geeks{
    private:
    public:
    void getdata()
    {
        int a=306;
        char ch="ahsan";
        float salary=50000;
    }
    void putdata()
    {
        cout<<"id of me is "<<a<<endl;
        cout<<"name of me is "<<ch<<endl;
        cout<<"salary is "<<salary<<endl;

    }
};
