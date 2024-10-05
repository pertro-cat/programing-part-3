#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bookName, author;

    cout << "Enter a book name: " << endl;
    getline(cin, bookName);  // Використовуємо getline для введення повної назви книги

    cout << "Enter an author name: " << endl;
    getline(cin, author);  // Використовуємо getline для введення імені автора

    cout << "Book: " << bookName << ", Author: " << author << " added to the library." << endl;

    return 0;
}
