#include<iostream>
using namespace std;
class emp
{
    private:
       string name;
       int e_no,basic;
       float DA,IT,net;
    public:
      emp():name("NULL"),e_no(0),basic(0){}
      emp(string name,int no,int bas):name(name),e_no(no),basic(bas){}
      void display();
      float add(emp e,emp d)
      {
          float x=0;
          x=e.net+d.net;
          return x;
      };
      void compute()
       {
        DA=0.52*basic;
        IT=(DA+basic)*0.30;
        net=basic+DA-IT;
        };
      void display()
       {
        cout<<"employee name  :"<<name<<"\n";
        cout<<"employee number  :"<<e_no<<"\n";
        cout<<"employee DA :"<<DA<<"\n";
        cout<<"employee net salary  :"<<net<<"\n";
        };
};
int main()
{
    int total;
    emp e1("Rajesh",12345,10000);
    emp e2("Suresh",123456,20000);
    e1.compute();
    e2.compute();
    e1.display();
    e2.display();
    int x=add(e1,e2);
    cout<<"addition of salaries of employee 1 and employee 2 "<<x<<endl;
    return 0;
}