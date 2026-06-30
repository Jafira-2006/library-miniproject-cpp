#ifndef BOOK_H
#define BOOK_H
#include<string>
class book
{
 private:
 int Id;
 std::string Title;
 bool isIssued;
 public:
 book(int bId,std::string bTitle);
 int getId() const;
 std::string getTitle() const;
 bool getStatus() const;
 void issueBook();
 void returnBook();
};
#endif
