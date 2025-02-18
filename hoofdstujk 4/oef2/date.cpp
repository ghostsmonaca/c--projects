#include "date.hpp"
#include <iostream>
using namespace std;
using namespace N;

date::date(const std::string &date_string) {
    if (sscanf(date_string.c_str(), "%d/%d/%d", &m_dag, &m_maand, &m_jaar) != 3) {
        cerr << "Error parsing date." << endl;
    };
}

void date::print_date(){
    cout << m_dag << "/" << m_maand << "/" << m_jaar << endl;
}