#pragma once
#include <iostream>
#include <vector>
#include "Book.cpp"
#include <algorithm>

using namespace std;

class Library{
    private:
        vector<Book> books;
    public:
        void addBook(Book b){
            books.push_back(b);
        }
        void viewBook(){
            for(auto iter=books.begin();iter!=books.end();iter++){
                cout<<iter->toString()<<endl;
            }
        }
        bool updateBook(int number){
            string t;
            int index=searchBook(number);
            if(index!=-1){
                cout<<"Enter title:";
                cin>>t;
                books[index].setTitle(t);
                return true;
            }else{
                return false;
            }

        }
        bool deleteBook(int number){
            int index=searchBook(number);
            if(index!=-1){
                for(int i=index;i<books.size()-1;i++){
                    books[i]=books[i+1];
                }
                return true;
            }else{
                return false;
            }
        }

        int searchBook(int number){
    
            for(int i=0;i<books.size();i++){
                if(books[i].getNumber()==number){
                    return i;
                }
            }
            return -1;
        }

        void sortBook(){
            for(;;){
                for(;;){
                    
                }
            }
        }




};