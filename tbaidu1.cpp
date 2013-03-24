#include<iostream>
#include <string.h>
using namespace std;
class Student 
{
private:
    string name;
    int age;
    double high;
    char sex;
public:
    Student(){};
    Student(string n,int a,double h,char s);
    void display();
    void changage(string,int,double,char);//这个函数，我都不说了
    void set_data();
};
Student::Student(string n,int a,double h,char s)
{
    name=n;
    age=a;
    high=h;
    sex=s;
}
void Student::display()
{
    cout<<"姓名："<<name<<'\t'<<"年龄："<<age<<'\t'<<"身高："<<high<<'\t';
    switch(sex)
    {
        case 'w':
            cout<<"男";
            break;
        default:
            cout<<"女";
            break;
    }
}
void Student::changage(string n,int a,double h,char s)
{
    name=n;
    age=a;
    high=h;
    sex=s;
}
void  Student::set_data()
{
    cout<<"请依次输入姓名，年龄，身高，性别：";//语法错误啊！！怎么回事
    cin>>name>>age>>high>>sex;//endl啊，输入啊，这又不是变量
}
int main(int argc,char* argv[])
{
  Student a1("zhanghua",23,1.56,'w'),a2;
//  a1("zhanghua",23,1.56,'w');//这个这是的，我都不想说了
  a1.display();
  a2.set_data();
  a2.display();
  return 0;
}
//最后啊，你连个错误都不贴
