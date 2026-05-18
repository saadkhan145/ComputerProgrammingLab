#include <iostream>
#include <cstring>
using namespace std;

// Structure declaration for a Book record
struct Book
{
    char  title[100];   // member: book title
    char  author[50];   // member: author name
    float price;        // member: price in PKR
    int   pages;        // member: total number of pages
};

int main()
{
    // Declare two Book variables
    Book book1, book2;

    // Initialize book1 members
    strcpy(book1.title,  "Introduction to C++ Programming");
    strcpy(book1.author, "Walter Savitch");
    book1.price = 1500.00f;   // float member assigned with 'f' suffix
    book1.pages = 912;

    // Initialize book2 members
    strcpy(book2.title,  "The C++ Programming Language");
    strcpy(book2.author, "Bjarne Stroustrup");
    book2.price = 2200.50f;
    book2.pages = 1376;

    // Display book1 details
    cout << "--- Book 1 ---" << endl;
    cout << "Title  : " << book1.title  << endl;
    cout << "Author : " << book1.author << endl;
    cout << "Price  : " << book1.price  << " PKR" << endl;
    cout << "Pages  : " << book1.pages  << endl;

    // Display book2 details
    cout << "--- Book 2 ---" << endl;
    cout << "Title  : " << book2.title  << endl;
    cout << "Author : " << book2.author << endl;
    cout << "Price  : " << book2.price  << " PKR" << endl;
    cout << "Pages  : " << book2.pages  << endl;

    return 0;
}
