#include<iostream>
using namespace std; 
class emp
{
   public:
     int e_no;
     char e_name[100];
	 char des[30];
     void front()
     {
              cout<<"enter the employee number:";
              cin>>e_no;
              cout<<"enter the employee name:";
              cin>>e_name;
              cout<<"enter the designation:";
              cin>>des;
     }
};
class salary:public emp
{
int bp,hra,da,pf,np;
   public:
     void sal()
     {             
              cout<<"enter the basic pay:";
              cin>>bp;
              cout<<"enter the Humen Resource Allowance:";
              cin>>hra;
              cout<<"enter the Dearness Allowance :";
              cin>>da;
              cout<<"enter the Profitablity Fund:";
              cin>>pf;
     }
     void total()
     {
              np=bp+hra+da-pf;
     }
     void display()
     {
              cout<<e_no<<"\t"<<e_name<<"\t"<<des<<"\t"<<bp<<"\t"<<hra<<
              "\t"<<da<<"\t"<<pf<<"\t"<<np<<"\n";
     }
};
  
 main()
{
    int i,n;
    char ch;
    salary s[100];
    cout<<"enter the number of employee:";
    cin>>n;
    for(i=0;i<n;i++)
    {
              s[i].front();
              s[i].sal();
              s[i].total();
    }
    cout<<"\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
    for(i=0;i<n;i++)
    {
              s[i].display();
    }
   
}

