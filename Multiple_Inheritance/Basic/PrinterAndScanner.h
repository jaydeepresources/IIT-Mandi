#include <iostream>
#include <string>
#include "Printer.h"
#include "Scanner.h"

using namespace std;

class PrinterAndScanner : public Printer, public Scanner
{

public:
};

// class PrinterAndScanner
// {

// public:
//     string name;
//     Printer printer;
//     Scanner scanner;
// };