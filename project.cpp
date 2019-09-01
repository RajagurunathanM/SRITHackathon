#include<iostream>+
#include<fstream>
using namespace std;
int arrear()
{
string s1;
ifstream files1("arrear.txt");
while(!files1.eof())
{
getline(files1,s1);
cout<<"\t\t"<<s1<<endl;
}
return 0;
}
int nohistory()
{
string s2;
ifstream files2("nohistory.txt");
while(!files2.eof())
{
getline(files2,s2);
cout<<"\t\t"<<s2<<endl;
}
return 0;

}
int nostanding()
{
string s3;
ifstream files3("nostanding.txt");
while(!files3.eof())
{
getline(files3,s3);
cout<<"\t\t"<<s3<<endl;
}
return 0;


}
int gotjob()
{
    cout<<"\n\t\tSTUDENTS PLACED IN ACADEMIC YEAR WISE\n";
    cout<<"\n\t\t->2015\n\t\t->2016\n\t\t->2017\n";
    int year;
    cout<<"\n\t\tENTER YEAR TO ENQUIRE DETAILS\n\t\t";
    cin>>year;
    if(year==2015)
    {
               string s2015;
               ifstream files2015("jobfile2015.txt");
               while(!files2015.eof())
               {
                 getline(files2015,s2015);
                 cout<<"\t\t"<<s2015<<endl;
               }
    }
    else if(year==2016)
    {
               string s2016;
               ifstream files2016("jobfile2016.txt");
               while(!files2016.eof())
               {
                 getline(files2016,s2016);
                 cout<<"\t\t"<<s2016<<endl;
               }

    }
    else if(year==2017)
    {
               string s2017;
               ifstream files2017("jobfile2017.txt");
               while(!files2017.eof())
               {
                 getline(files2017,s2017);
                 cout<<"\t\t"<<s2017<<endl;
               }

    }
    else
    {
            cout<<"\t\tINVALID INPUT\n";

    }
   return 0;
}
int students()
{
    cout<<"\n\t\tSTUDENTS DETAILS\n";
    cout<<"\n\t\t1.STUDENTS WITH NO HISTORY OF ARREARS\n";
    cout<<"\n\t\t2.STUDENTS WITH NO STANDING OF ARREARS\n";
    cout<<"\n\t\t3.STUDENTS WITH ARREARS\n";
    cout<<"\n\t\tENTER YOUR CHOICE\n\t\t";
    int choice;
    cin>>choice;
    if(choice==1)
    {
        nohistory();
    }
    else if(choice==2)
    {
         nostanding();
    }
    else if(choice==3)
    {

        arrear();
    }
    else
    {

     cout<<"\t\tINVALID INPUT\n";

    }
    return 0;

}
int company()
{
    cout<<"\n\t\tCOMPANY LIST IN YEARWISE\n";
    cout<<"\n\t\t->2015\n\t\t->2016\n\t\t->2017\n";
    cout<<"\n\t\tENTER YEAR\n\t\t";
    int year;
    cin>>year;
    if(year==2015)
    {
        string s2015;
                  ifstream files2015("companyfile2015.txt");
                  while(!files2015.eof())
                   {
                    getline(files2015,s2015);
                    cout<<"\t\t"<<s2015<<endl;
                  }
    }
    else if(year==2016)
    {
        string s2016;
                  ifstream files2016("companyfile2016.txt");
                  while(!files2016.eof())
                   {
                     getline(files2016,s2016);
                     cout<<"\t\t"<<s2016<<endl;
                   }
    }
    else
    {
         string s2017;
                  ifstream files2017("companyfile2017.txt");
                  while(!files2017.eof())
                    {
                     getline(files2017,s2017);
                     cout<<"\t\t"<<s2017<<endl;
                    }


    }
    return 0;
}
int func()
{
cout<<"\t\t---------------------------------------------------\n";
cout<<"\t\t\tWELCOME TO PLACEMENT REGISTER SOFTWARE\t\t\t\t\n";
cout<<"\t\t---------------------------------------------------\n";
cout<<"\n\t\t1.STUDENTS GOT THROUGH PLACEMENT CELL IN ACADEMIC YEARWISE\n";
cout<<"\n\t\t2.CURRENT YEAR-2019 STUDENTS DETAILS\n";
cout<<"\n\t\t3.LIST OF COMPANIES PARTICIPATED IN PLACEMENT\n\t\t  IN ACADEMIC YEAR WISE\n\n\n";
int choice;
cout<<"\n\t\tENTER YOUR CHOICE:\n\t\t";
cin>>choice;
switch(choice)
{
    case 1:gotjob();
           break;
    case 2:students();
           break;
    case 3:company();
           break;
    default:cout<<"\n\t\tINVALID INPUT..(THE VALID INPUTS ARE 1.2.3..)\n";
            break;
}
return 0;
}
int main()
{
    char n;
    for(int i=0;i<20;i++)
    {

        func();
        cout<<"\n\t\t....THANK YOU....\n"<<endl;
        cout<<"\t\tDO YOU WANT TO CONTINUE?..[Y/N]";
        cin>>n;
        if(n=='y')
        {

        continue;
        }
        else
        {
        break;

        }

    }
return 0;
}
