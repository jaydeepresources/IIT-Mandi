#include <iostream>
#include <string>

using namespace std;

class Category
{
private:
    int categoryId;
    string categoryName;

public:
    Category()
    {
        categoryId = 0;
        categoryName = "";
    }

    Category(int categoryId, string categoryName)
    {
        this->categoryId = categoryId;
        this->categoryName = categoryName;
    }

    Category(const Category &category)
    {
        categoryId = category.categoryId;
        categoryName = category.categoryName;
    }

    int getCategoryId()
    {
        return categoryId;
    }

    void setCategoryId(int categoryId)
    {
        this->categoryId = categoryId;
    }

    string getCategoryName()
    {
        return categoryName;
    }

    void setName(string categoryName)
    {
        this->categoryName = categoryName;
    }

    void printCategory()
    {
        cout << "category id= " << categoryId << endl;
        cout << "category name= " << categoryName << endl;
    }
};