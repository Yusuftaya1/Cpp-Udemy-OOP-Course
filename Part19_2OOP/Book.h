#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string title;
    string author;
    int pages;
    
public:
    // Constructor
    Book(string _title, string _author, int _pages);
    
    // Destructor
    ~Book();

    // Getter functions
    string getTitle() const;
    string getAuthor() const;
    int getPages()const;

    // Display function
    void display() const;

    // Setter functions
    void setTitle(string _title);
    void setAuthor(string _author);
    void setPages(int _pages);
};  
