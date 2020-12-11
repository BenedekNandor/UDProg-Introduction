#include"std_lib_facilities.h"

int main()
try{
    int birth_year=2001;
    int date=2020;
    int age;
    int a, b, c, d;
    double x=1234567.89;
     age=date - birth_year;

    cout<<birth_year<<"\t"<<birth_year<<"\t Decimal"<<endl;
    cout<<birth_year<<"\t"<<hex<<birth_year<<"\t Hexadecimal"<<endl;
    cout<<dec<<birth_year<<"\t"<<oct<<birth_year<<"\t Octal"<<endl;


    cout<<dec<<"You are "<<age<<" old in decimal."<<endl;
    cout<<hex<<"You are "<<age<<" old in hexadecimal"<<endl;
    cout<<oct<<"You are "<<age<<" old in octal."<<endl;

    cout<<"Please give 4 number! \n";

    cin >> a >>oct >> b >> hex >> c >> d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

    cout<<defaultfloat<<x<<"\t(defaultfloat)"<<endl;
    cout<<fixed<<x<<"\t(fixed)"<<endl;
    cout<<scientific<<x<<"\t(scientific)"<<endl;



    cout<<'|'<<setw(10)<<"Last name"<<'|'<<setw(20)<<"First name"<<'|'<<setw(20)<<"Phone number"<<'|'<<setw(25)<<"E-mail"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Tóth"<<'|'<<setw(20)<<"Daniel"<<'|'<<setw(20)<<"6384912"<<'|'<<setw(25)<<"tothdani2@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Kiss"<<'|'<<setw(20)<<"Adam"<<'|'<<setw(20)<<"4783519"<<'|'<<setw(25)<<"kissadi23@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Nagy"<<'|'<<setw(20)<<"Ferenc"<<'|'<<setw(20)<<"9926549"<<'|'<<setw(25)<<"nagyferi98@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Fazekas"<<'|'<<setw(20)<<"Lajos"<<'|'<<setw(20)<<"4528934"<<'|'<<setw(25)<<"fazlaj1221@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Lakatos"<<'|'<<setw(20)<<"Miklos"<<'|'<<setw(20)<<"7725194"<<'|'<<setw(25)<<"lakatosmiklos1994@gmail.com"<<'|'<<endl;
}
catch(exception& e){
    cerr<<"Error: " <<e.what()<<endl;
    return 1;
}
