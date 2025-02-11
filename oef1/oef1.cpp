#include "operations.cpp"

int main(){
    int numbers[3];
    for(int i = 0; i < 3; i++){
        int x;
        cout << "Type a number: "; // Type a number and press enter
        cin >> x; // Get user input from the keyboard
        if(x <= 0){
            cerr << "Error, give a postive number" << "\n";
            int y;
            cout << "Type a POSITIVE NUMBER: "; // Type a number and press enter
            cin >> y; // Get user input from the keyboard
            numbers[i] = y;
        }
        else{
            numbers[i] = x;
        }
    }

    convert_centi_inch(numbers);

    return 0;
}