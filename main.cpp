/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

MCMXCIV

*******************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;



class romanType{

    str getromannumber(roman);
    // function to store the roman numeral
    // return roman numeral

    int convert_roman_to_decimal(roman);
    // Convert and store the number into decimal form.
    // retrun decimal form.

    void show_roman(roman);

    void show_decimal();



};// end of the class



str romanType::getromannumber(roman){
    return roman;
}



int romanType::convert_roman_to_decimal(const string roman){

    // Map to hold Roman numeral values
    unordered_map<char, int> roman_value = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };


    int decimal_value = 0;
    int n = roman.size();

    for (int i=0; i<n , i++){
        // If current value is less than next, subtract it, else add it
        if ( roman_value[roman[i]] < roman_value[roman[i+1]]){
            decimal_value -=roman_value[roman[i]];


        }else{

            decimal_value +=roman_value[roman[i]];

        }

    }

    return decimal_value;



}



void romanType::show_roman(roman){
    cout << "The roman numeral is:" << endl << roman;


}

void romanType::show_decimal(){
    cout << "The deciaml is:" << endl << ???;




}









int main()
{
    romanType object;

    cout << "please give us a roman numeral" << endl;
    string roman;
    cin>>roman;

    object.getromannumber(roman);







    return 0;
}



