#include<iostream>
#include <fstream>
#include <sstream>
#include "Book.cpp"
#include <vector>
using namespace  std;

int main(){

    //book data
    Book b(101,"B1","A1");
    Book bb(102,"BB","AA");
    vector<Book> books;
    books.push_back(b);
    books.push_back(bb);

    //Step1: open file
    ofstream outFile("books2.dat",ios::binary);
    //Step2: write data into file
    for(Book book:books){
        outFile.write(reinterpret_cast<char *>(&book),sizeof(book));   
    }
    //Step3: close file
    outFile.close();

    Book b2;
    ifstream inFile("books2.dat", ios::binary);
    while(inFile.read(reinterpret_cast<char *>(&b2), sizeof(b2))){
        cout<<b2.toString()<<endl;
    }
    inFile.close();




    return 0;
}
