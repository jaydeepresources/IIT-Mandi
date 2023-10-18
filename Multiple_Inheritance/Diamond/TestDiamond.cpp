#include <iostream>

using namespace std;

using namespace std;

class Product
{

public:
    string name;

    void display()
    {
        cout << "Display member details." << endl;
    }
};

class Printer : virtual public Product
{

public:
    void print()
    {
        cout << "Printing a page." << endl;
    }
};

class Scanner : virtual public Product
{

public:
    void scan()
    {
        cout << "Scanning a page." << endl;
    }
};

class PrinterAndScanner : public Printer, public Scanner
{

public:
    void display()
    {
        cout << "Printer's Name=" << Printer::name << endl;
        cout << "Scanner's Name=" << Scanner::name << endl;
    }
};

int main()
{

    PrinterAndScanner ps;

    // ps.name = "Canon";
    // ps.Printer::name = "Canon";
    // ps.Scanner::name = "HP";

    // ps.display();

    ps.name = "Epson";
    ps.display();

    return 0;
}