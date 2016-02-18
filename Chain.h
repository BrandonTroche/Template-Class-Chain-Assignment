/*
Chain.h
Written for: Computer Science 335 - Professor Stamos - Assignment 1
Written By: Brandon Troche
Written in: C++ 11
Last Edited: 2/18/16
*/


#ifndef CSCI335_HOMEWORK1_CHAIN_
#define CSCI335_HOMEWORK1_CHAIN_
#include <cstddef>
#include <iostream>
using namespace std;

// Place comments that provide a brief explanation of the class.
template<typename Object>
class Chain {
 public:

  Chain();  //No parameter constructor
  Chain(const int &&firstParameter); //One parameter constructor
  Chain(const Chain &rhs); //Copy constructor
  Chain& operator=(const Chain &rhs); //Copy assignment operator
  Chain(Chain &&rhs); //Move constructor
  Chain& operator=(Chain &&rhs); //Move assignment operator

  ~Chain(); //Destructor

  Chain operator+(const Chain &rhs); //+ overload for Chain Objects
  Chain operator+(Object &&rhs); //+ overload for R-Values
  Object& operator[](Object &&i); //[] overload for indexing 

  friend std::ostream& operator<<(std::ostream& out, const Chain &rhs); //"<<" Overload for output stream


  void value(){ //Prints the value of all items in the array_
    for(int i=0; i<size_; i++)
       cout<<array_[i]<<endl;
  }
 
  size_t Size(){ //Returns the size_ of the array_ of that Chain.
    return size_;
  }

  void ReadChain(){ //Reads a Chain of size 4, still a placeholder function
    cout<<"Please enter a chain (assuming size 4): ";
    int tempArray[4] = {};
    cin>>tempArray[0]>>tempArray[1]>>tempArray[2]>>tempArray[3];
    for(int i=0; i<3; i++){
      array_[i] = tempArray[i];
      cout<<array[i]<<" ";
    }
    cout<<endl;
  }

  // // Constructs an array from a given set of literals
  // Chain(initializer_list< vector<Object> > lst) : array_(lst.size()){
  //   int i = 0;
  //   for(auto &v : lst)
  //     array_[i++] = std::move(v);
  // }

  //Destructor for the class
 



 private:
  size_t size_;
  Object *array_ = nullptr;
};

//No parameter Constructor
template<typename Object>
  Chain<Object>::Chain() {
    size_ = 0;
    array_ = new int[50];

    cout<<"No parameter constructor works\n";
  }

//One parameter Constructor
template<typename Object>
  Chain<Object>::Chain(const int &&firstParameter){
    size_ = 1;
    array_ = new int[50];

    array_[0] = firstParameter;

    cout<<"One parameter constructor works\n";
  }

//Copy Constructor
template<typename Object>
  Chain<Object>::Chain(const Chain &rhs) {
    array_ = new int {*rhs.array_};
  }

//Overload of '=' - Copy assignment Operator
template<typename Object>
  Chain<Object>& Chain<Object>::operator=(const Chain<Object> &rhs){
    if (this != &rhs){
      //I want this to work: *array_ = *rhs.array_; 
      delete array_;
      array_ = new int[50];

        for (int i=0; i<size_; i++){
          array_[i] = rhs.array_[i];
        }

      size_ = rhs.size_;
    }

    cout<<"The '=' overload works (Copy assignment)\n";
    return *this;

  }

//Move constructor
  template<typename Object>
    Chain<Object>::Chain(Chain &&rhs) : array_{rhs.array_} { 
      rhs.array_ = nullptr;
      cout<<"Move constructor works\n";
    }

//Move assignment operator
  template<typename Object>
    Chain<Object>& Chain<Object>::operator=(Chain &&rhs){
    std::swap(array_, rhs.array_ );

    cout<<"Move assignment works\n";

    return *this;
    }

//Destructor
template<typename Object>
   Chain<Object>::~Chain() {
    delete array_;
    cout<<"Destructor works\n";
  }

//Overload for + as concatenation for chain object
template<typename Object>
  Chain<Object> Chain<Object>::operator+(const Chain<Object> &rhs){
    Chain<Object> newChain{this};
    int oldSize = newChain.Size();
    newChain.size_ = oldSize + rhs.Size();
    int i = 0;
      for(oldSize; oldSize<newChain.Size(); oldSize++){
         newChain.array_[oldSize] = rhs.array_[i]; 
        i++;
      }
    cout<<"The + operator works (Object)\n";
    return newChain;
  }

//Second Overload for + as concatenation for literals
template<typename Object>
  Chain<Object> Chain<Object>::operator+(Object &&rhs){
    Chain<Object> newChain{*this};
    newChain.array_[newChain.Size()] = rhs;
    newChain.size_ += 1;

    cout<<"The + operator works (string/literal)\n";
  }

//Overload for the [] operator as an indexing tool
template<typename Object>
  Object& Chain<Object>::operator[](Object &&i){
    return array_[i];
  }

//ostream '<<' Overload for output
template<typename Object>
  std::ostream& operator<<(std::ostream& out, const Chain<Object> &rhs){
    out<<"[ ";
      for(int i=0; i<rhs.size_; i++)
        out<<rhs.array_[i];
    out<<"]";

  return out;

  }




#endif // CSCI_335_HOMEWORK1_CHAIN_
