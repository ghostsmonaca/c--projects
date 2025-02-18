#include "Coords.hpp"
#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;
using namespace N;

Coords::Coords(int newx, int newy){
    setx(newx);
    sety(newy);
}

void Coords::print_coords(){
    tuple<int, int> t(m_x, m_y);
    cout << "X value: " << get<0>(t) << " || Y value: " << get<1>(t) << "\n";

}

double Coords::calc_dist(const Coords &other) const {
    return sqrt(pow(other.m_x - m_x, 2) + pow(other.m_y - m_y, 2));
}