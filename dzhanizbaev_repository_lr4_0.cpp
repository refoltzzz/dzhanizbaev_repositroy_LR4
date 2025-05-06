#include <iostream>
#include <limits>
#include <string>
using namespace std;

int check(string str = "", int minx = INT_MIN, int maxx = INT_MAX) 
{
    int x;
    cout << str << endl;
    while (!(cin >> x)  x < minx  x > maxx) 
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "neverno vvedite zanovo" << endl;
        cout << str << endl;
    }
    return x;
}

void A()
{
    char bukvaA;
    cout << "vvedite bukvu A: ";
    cin >> bukvaA;
    if (bukvaA == 'A')
        cout << "vi vveli: " << bukvaA << endl;
    else
        cout << "neverno. vvedite zaglavnyu bukvu A" << endl;
}

void B()
{
    char bukvaB;
    cout << "vvedite bukvu B: ";
    cin >> bukvaB;
    if (bukvaB == 'B')
        cout << "vi vveli: " << bukvaB << endl;
    else
        cout << "neverno. vvedite zaglavnyu bukvu B" << endl;
}

void slozhenie()
{   
    
}

void vichitanie()
{
    
}

int main() 
{
    int nomer_zadaniya = 0;
    while (true) 
    {
        cout << "nomer 1. vvesti A\n";
        cout << "nomer 2. vvesti B\n";
        cout << "nomer 3. vipolnit operaciu slozhenia(+)\n";
        cout << "nomer 4. vipolnit operaciu vichitaniya(-)\n"; 
        cout << "esli xotite zakrit programy, vvedite 0\n";
        nomer_zadaniya = check("vvedite nomer zadaniya", 0, 4);

        if (nomer_zadaniya == 0) 
        {
            break;
        }

        switch (nomer_zadaniya) 
        {
            case 1:
                A();
                break;
            case 2:
                B();
                break;
            case 3:
                slozhenie();
                break;
            case 4:
                vichitanie();
                break;
        }

        cout << "rabota vipolnena. zakonchit rabotu programi? (1 - da, 0 - net): ";
        int exit_vibor = check("", 0, 1);
        if (exit_vibor == 1) 
        {
            break;
        }
    }
    cout << "programma zakryta." << endl;
    return 0;
}