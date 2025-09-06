#include<iostream>
using namespace std;

class Book
{
    public:
    string title;
    string author;
    int year;
};
int main()
{
    //Create an object for book 1
    Book book1;
    book1.title = "Matilda";
    book1.author = "Ronald Dahl";
    book1.year  = 1988;
    
    //Create an object for book 2
    Book book2;
     book2.title = "The Giving Tree";
     book2.author = "Shel Silverstein";
     book2.year = 1964;

     //print attribute values
     cout<<book1.title<<" "<<book1.author<<" "<<book1.year<<endl;
     cout<<book2.title<<" "<<book2.author<<" "<<book2.year<<endl;
     return 0;
}