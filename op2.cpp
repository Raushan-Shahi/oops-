// practice of nesting of member function
// not working properly

#include <iostream>
#include <string>
using namespace std;

class mnitstud
{
    int x, m[4];
    string s;
    friend  mnitstud result(mnitstud o);

public:
    void getmarks();
    void getdetails();
};

void mnitstud ::getmarks()
{
    cout << "enter the marks of following subject:" << endl;
    cout << "maths: ";
    cin >> m[0];
    cout << "\nBME: ";
    cin >> m[1];
    cout << "\nCSP: ";
    cin >> m[2];
    cout << "\nEco: ";
    cin >> m[3];
}

void mnitstud ::getdetails()
{
    cout << "enter your student id: " << endl;
    cin >> x;
    cout << "enter your name: " << endl;
    cin >> s;
}

mnitstud result(mnitstud o)
{
    int flag = 0;
    for (int i = 0; i < 4; i++)
    {
        if ((i == 0) && (o.m[0] < 33))
        {
            cout << "the student failed in maths." << endl;
            flag = 1;
        }
        else if ((i == 1) && (o.m[1] < 33))
        {
            cout << "the student failed in BME." << endl;
            flag = 1;
        }
        else if ((i == 2) && (o.m[2] < 33))
        {
            cout << "the student failed in CSP." << endl;
            flag = 1;
        }
        else if ((i == 3) && (o.m[3] < 33))
        {
            cout << "the student failed in Eco." << endl;
            flag = 1;
        }
        else if (flag == 0)
        {
            cout << "the student passed in all subjects." << endl;
            flag = 1;
        }
    }
}

int main()
{
    int n, i;
    cout << "enter the number of students in the class: " << endl;
    cin >> n;
    mnitstud obj[n];

    for (i = 0; i < n; i++)
    {
        obj[i].getdetails();
        obj[i].getmarks();
        result(obj[i]);
    }
    return 0;
}
