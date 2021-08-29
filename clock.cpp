#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>

using namespace std;
int time()
{
    int h, m, s, a = 0, err = 0;
    while (err == 0)
    {
        cout << "Enter hours : ";
        cin >> h;
        cout << "\nEnter minutes : ";
        cin >> m;
        cout << "\nEnter seconds : ";
        cin >> s;

        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            system("cls");
    }
    while (a == 0)
    {
        system("cls");

        cout << "\tTime\t" << (h < 10 ? "0" : "") << h << " : " << (m < 10 ? "0" : "") << m << " : " << (s < 10 ? "0" : "") << s << endl;
        cout << "\n---------------------------------";

        sleep(1);
        s++;

        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 24)
        {
            h = 0;
        }
    }
}

int stopwatch()
{
    int h = 0, m = 0, s = 0, a = 0;
    while (a == 0)
    {
        system("cls");
        cout << "\tstopwatch\t\n\n"
             << endl;
        cout << "\t";
        cout << (h < 10 ? "0" : "") << h << " : " << (m < 10 ? "0" : "") << m << " : " << (s < 10 ? "0" : "") << s << endl;
        cout << "\n---------------------------------";

        sleep(1);
        s++;

        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 24)
        {
            h = 0;
        }
    }
}

int timer()
{
    int h, m, s, a = 0, err = 0;
    while (err == 0)
    {
        cout << "Enter hours : ";
        cin >> h;
        cout << "\nEnter minutes : ";
        cin >> m;
        cout << "\nEnter seconds : ";
        cin >> s;

        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            system("cls");
    }

    while (a == 0)
    {
        system("cls");
        cout << "\t   Timer\t\n\n"
             << endl;
        cout << "\t";
        cout << (h < 10 ? "0" : "") << h << " : " << (m < 10 ? "0" : "") << m << " : " << (s < 10 ? "0" : "") << s << endl;
        cout << "\n---------------------------------";

        if (h == 0 && m == 0 && s == 0)
        {
            system("cls");
            break;
        }

        sleep(1);
        s--;

        if (h == 0 && m == 0 && s == 0)
        {
            system("cls");
            break;
        }
        if (s < 1)
        {
            s = 59;
            m--;
        }
        if (m < 1 && h > 0)
        {
            if (m == 0)
                continue;
            m = 59;
            h--;
        }
        
    }
    cout << "\t\nTime's up !!\n\n";
}
int main()
{

    int x;
    cout << "\nEnter your choice\n"<<endl;
    cout<<"1.Time"<<endl;
    cout<<"2.Stopwatch"<<endl;
    cout<<"3.Timer"<<endl;
    cout<<"\nYour choice : ";  cin >> x;
    
    if(x<1 || x>3)
    {
    cout<<"Enter valid input !"<<endl;
    cout<<"\nYour choice : ";  cin >> x;    
    }
    if (x == 1)
         time();
    else if (x==2)
        stopwatch();
    else if (x==3)
        timer();        
    
    return 0;
}