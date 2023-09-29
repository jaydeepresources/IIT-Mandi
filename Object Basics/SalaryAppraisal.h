#include <iostream>
using namespace std;

class SalaryAppraisal
{
public:
    float calculateNewSalary(float salary, int band)
    {
        int appraisalPercentages[] = {25, 30, 40};
        int newSalary = salary * appraisalPercentages[band - 1] / 100;

        if (newSalary < salary * 1.5)
            salary += salary * appraisalPercentages[band - 1] / 100;

        return salary;
    }
};