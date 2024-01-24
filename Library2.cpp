#pragma once
#include <cstddef>
#include <iostream>
#include <vector>
#include "Book.cpp"
#include <algorithm>

using namespace std;

class Library2{
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
    
        void updateBook(Book b){
            string t;
            auto iter=find(books.begin(),books.end(),b);
            cout<<"Enter a new title:";
            cin>>t;
            iter->setTitle(t);

        }
        void deleteBook(Book b){
            auto iter=find(books.begin(),books.end(),b);
            books.erase(iter);
            
        }

        void searchBook(Book b){
            //Using search algorithms
            
            
            // Using lambda expressions in C++11
            string title = "Book1";    
            auto iter=find_if(books.begin(), books.end(), [title](Book const& b){
                return b.getTitle() == title;
            });
            
            if (iter != books.end()){
                cout<<iter->toString()<<endl;
                cout << "\n" << b.getTitle() << " was found.";
            }else
                cout << "\n" << b.getTitle() << " was not found.";
                
            }

        void sortBook(){
            //Using sort algorithms
            //sort(books.begin(), books.end()); 
            
            // Using lambda expressions in C++11
            sort( books.begin(), books.end(), [](const Book &a, const Book &b){ return (a.getNumber() < b.getNumber());});
        }

    

};