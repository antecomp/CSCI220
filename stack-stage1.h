/*
 * stack.h
 *
 * Implements a simple stack class using dynamic arrays.
 * This may be implemented in 3 stages:
 *   Stage 1: non-template stack class storing strings, unsafe
 * copies/assignments Stage 2: template stack class, unsafe copies/assignments
 *   Stage 3: template stack class, safe copies/assignments
 *
 * Note: no underflow detection is performed.  Performing pop() or top()
 * on an empty stack results in undefined behavior (possibly crashing your
 * program)!
 *
 * Author: Your Name
 */

#ifndef _STACK_H
#define _STACK_H

#include <cstddef> // for size_t
#include <string>  // for stage 1
#include <iostream>

using namespace std;

class stack {
  public:
    int stackSize; 
    int currentMaxStackSize;

    string top(); // non-inline, implemented in stack-stage1.cpp


    void growData() {
      //cout << "\n growData called \n";
      //cout << "\n Prior Data Address: " << &_data << endl;
      string * temp = new string[currentMaxStackSize *2];
      for (int i = 0; i < currentMaxStackSize; i++) {
        temp[i] = _data[i];
      }

      delete[] _data; 
      currentMaxStackSize *= 2;
      _data = temp;
      //cout << "\n New Data Address: " << &_data;
      return;
    } 


    // inline definitions, doing nothing at the moment
    void push(const string &inputString) { 
      if (stackSize == currentMaxStackSize) { growData(); }
      _data[stackSize] = inputString;
      stackSize++;
      return; 
      }
    void pop() {  // NOTE TO SELF : MAKE SURE YOU HAVE THE -1. STACKSIZE IS NOT THE FINAL INDEX!!
      // cout << "Removing: " << _data[stackSize - 1];
      _data[stackSize - 1] = "";
      stackSize--;
      return; 
      }
    size_t size() { return stackSize; }
    bool is_empty() { return (stackSize == 0); }

    stack() { 
       // starting fill for _data
       stackSize = 0;
       currentMaxStackSize = 4; // default to 4 for now until we change the constructed size
    }

  private:
    //string _data[4];
    string * _data = new string[4];
};

#endif
