#include "stack.hpp"
#include <iostream>
using namespace std;
using namespace S;

stack::stack(int grootte){
    setGrootte(grootte);
}

/*stack::~stack(){
}*/

void stack::init(){
    m_top = -1;
}

void stack::print(){
    for(int i = 0; i < getGrootte(); i++){
        cout << elems[i];
    }
}

void stack::push(int a){
    if(!is_full()){
        m_top++;
        elems[m_top] = a;
    }
}

void stack::pop(){
    char c = '\0';
    if(!is_empty()){
        c = elems[m_top];
        m_top--;
    }
}

bool stack::is_empty(){
    return (m_top == -1);
}

bool stack::is_full(){
    return (m_top == (getGrootte() -1));
}