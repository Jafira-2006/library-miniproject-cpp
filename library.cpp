#include<iostream>
#include<fstream>
#include<vector>
#include "Book.h"
#include "book.cpp"
int main()
{
 std::vector<book>library;
 library.push_back(book(101,"object oriented programming"));
 library.push_back(book(102,"Data structures and Algorithm"));
 std::cout<<"___Anna university CSE Library Engine___";
 std::cout<<"Total books registered in database:"<<library.size()<<"\n \n";
 int searchId=101;
 bool systemCheck=false;
 std::cout<<"Searching database for Book Id:"<<searchId<<"..\n";
 for(size_t i=0;i<library.size();i++)
 {
  if (library[i].getId() == searchId) {
            systemCheck = true;
            
      
            if (library[i].getStatus() == false) {
                library[i].issueBook(); 
                std::cout << "Success! '" << library[i].getTitle() << "' has been issued.\n";
            } else {
                std::cout << "Error: This book is already borrowed by another student.\n";
            }
        }
    }

    if (systemCheck == false) {
        std::cout << "Error: Book ID not found in library registry.\n";
    }
    std::ofstream outFile("library_data.txt"); // Opens a text file for writing
    if (outFile.is_open()) {
        for (size_t i = 0; i < library.size(); i++) {
            // Write: ID, Title, Status separated by commas
            outFile << library[i].getId() << "," 
                    << library[i].getTitle() << "," 
                    << library[i].getStatus() << "\n";
        }
        outFile.close(); // Safely close the file
        std::cout << "\nDatabase successfully saved to 'library_data.txt'!\n";
    }

    return 0;
}
