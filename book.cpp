#include "Book.h"
book::book(int bId,std::string bTitle)
{
 Id=bId;
 Title=bTitle;
 isIssued=false;
}
int book::getId() const
{
 return Id;
}
std::string book::getTitle() const
{
 return Title;
}
bool book::getStatus() const
{
 return isIssued;
}
void book::issueBook()
{
 isIssued=true;
}
void book::returnBook()
{
 isIssued=false;
}
