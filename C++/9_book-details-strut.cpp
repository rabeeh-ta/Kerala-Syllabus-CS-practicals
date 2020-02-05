
/*
    9. Define a structure to store the details of books such as Book Code, Book Title, Date of Purchase, Author, Publisher and Price. Write a program with this structure to store the details of 10 books and display the details.
*/

#include <iostream>
#include <cstdio>
using namespace std;
struct dop
{
    int day;
    int month;
    int year;
};
struct book
{
    int bookcode;
    char booktitle[100];
    dop purchase;
    char author[100], publisher[100];
    float price;
};
int main()
{
    book b[10];
    int i;
    for (i = 0; i < 1; i++)
    {
        cout << "Enter the Book Code";
        cin >> b[i].bookcode;
        cout << "\nEnter the Book Title";
        fflush(stdin);
        gets(b[i].booktitle);
        cout << "\nEnter the day of purchase";
        cin >> b[i].purchase.day;
        cout << "\nEnter the month of purchase";
        cin >> b[i].purchase.month;
        cout << "\nEnter the year of purchase";
        cin >> b[i].purchase.year;
        cout << "Enter the author";
        fflush(stdin);
        gets(b[i].author);
        cout << "\nEnter the Publisher";
        gets(b[i].publisher);
        cout << "\nEnter the Price";
        cin >> b[i].price;
    }
    cout << "\nB_Code\tTitle\t\tDOP\tAuthor\tPublisher\tPrice\n";
    for (i = 0; i < 1; i++)
    {
        cout << b[i].bookcode << "\t" << b[i].booktitle << "\t";
        cout << b[i].purchase.day << "-" << b[i].purchase.month << "-" << b[i].purchase.year;
        cout << "\t" << b[i].author << "\t" << b[i].publisher;
        cout << "\t" << b[i].price << "\n";
    }
}