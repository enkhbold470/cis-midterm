#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string f1name, f2name;
    cout << "Enter input file name: ";
    cin >> f1name;
    cout << "Enter output file name: ";
    cin >> f2name;

    ifstream infile(f1name);
    ofstream outfile(f2name);

    // Check if opening the files is successful
    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1; // Return error code
    }

    

    string firstName = "Inky"; 
    unordered_map<char, int> letterCount;

    string mobileNumber = "331-356-2478";  
    unordered_map<char, int> digitCount;

    string line;
    int lineCount = 0;
    int letterTotalCount = 0;

    while (getline(infile, line)) {
        lineCount++;

        for (char ch : line) {
            if (isalpha(ch)) {
                letterTotalCount++;
                letterCount[ch]++;
            } else if (isdigit(ch)) {
                digitCount[ch]++;
            }
        }
    }

    // Write results to f2 and screen
    cout << "Number of lines in " << f1name << ": " << lineCount << endl;
    outfile << "Number of lines in " << f1name << ": " << lineCount << endl;

    cout << "Number of letters (a-z, A-Z) in " << f1name << ": " << letterTotalCount << endl;
    outfile << "Number of letters (a-z, A-Z) in " << f1name << ": " << letterTotalCount << endl;

    cout << "Occurrences of each letter in your first name:" << endl;
    outfile << "Occurrences of each letter in your first name:" << endl;

    for (char ch : firstName) {
        cout << ch << ": " << letterCount[ch] << " times" << endl;
        outfile << ch << ": " << letterCount[ch] << " times" << endl;
    }

    cout << "Occurrences of each digit in your mobile number:" << endl;
    outfile << "Occurrences of each digit in your mobile number:" << endl;

    for (char digit : mobileNumber) {
        cout << digit << ": " << digitCount[digit] << " times" << endl;
        outfile << digit << ": " << digitCount[digit] << " times" << endl;
    }

    // Close files
    infile.close();
    outfile.close();

    return 0; // Return success code
}
