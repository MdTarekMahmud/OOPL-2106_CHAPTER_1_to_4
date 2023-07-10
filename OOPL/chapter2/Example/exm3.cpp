// 3. Write a program that shows the use of class in a C++ program.
#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
    public:
        void getdata(void);
        void display(void);
};
void person :: getdata(void)
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Age : ";
    cin >> age;

}
void person :: display(void)
{
    cout << "\nName : " << name << endl;
    cout << "Age : " << age ;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}