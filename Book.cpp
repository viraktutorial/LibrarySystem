#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Book {
private:
  int number;
  string title;
  string author;
public:
  Book() {
    number = 0;
    title = "Unknown";
    author = "Unknown";
  }
  Book(int number, string title, string author) {
    setNumber(number);
    setTitle(title);
    setAuthor(author);
  }
  void setNumber(const int number) {
    if(number>0){
        this->number = number;
    }else{
  
    }
  }
  int getNumber() const{
    return number;
  }
  void setTitle(const string title) {
    if(!title.empty()){
        this->title = title;
    }else{
    
    }

  }
  string getTitle() const{
    return title;
  }
  void setAuthor(const string author) {
    if(!author.empty()){
        this->author = author;
    }else{
        
    }
    
  }
  string getAuthor() const{
    return author;
  }

  string toString(){
    stringstream ss;
    ss<<"Book number:"<<getNumber()<<" title:"<<getTitle()<<" author:"<<getAuthor();
    return ss.str();
  }

  bool operator==(const Book& b) const { 
    return (this->number == b.getNumber());
  }

  bool operator <(const Book& b) const {
    return this->getNumber() < b.getNumber();
  }

};