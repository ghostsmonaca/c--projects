#include "coords.cpp"

int main(){

    Coords c1(1,1);
    c1.print_coords();
    Coords c2(2,2);
    c2.print_coords();
    cout << "Distance: " << c1.calc_dist(c2);

    return 0;
}