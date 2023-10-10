// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>

// Define the custom substitution cipher
const std::unordered_map<char, char> cipher = {
    {'A', 'V'}, {'B', 'F'}, {'C', 'X'}, {'D', 'B'}, {'E', 'L'},
    {'F', 'I'}, {'G', 'T'}, {'H', 'Z'}, {'I', 'J'}, {'J', 'R'},
    {'K', 'P'}, {'L', 'H'}, {'M', 'D'}, {'N', 'K'}, {'O', 'N'},
    {'P', 'O'}, {'Q', 'W'}, {'R', 'S'}, {'S', 'G'}, {'T', 'U'},
    {'U', 'Y'}, {'V', 'Q'}, {'W', 'M'}, {'X', 'A'}, {'Y', 'C'},
    {'Z', 'E'}
};

// Function to encode a string using the custom substitution cipher
std::string encodeWithCustomCipher(const std::string& input) {
    std::string encodedString = "";
    for (char ch : input) {
        // Check if the character is in the cipher, and encode it
        if (cipher.find(ch) != cipher.end()) {
            encodedString += cipher.at(ch);
        }
        else {
            // If not in the cipher, keep the character as is
            encodedString += ch;
        }
    }
    return encodedString;
}

int main() {
    std::string inputString;

    // Get user input
    std::cout << "Enter a string (up to 128 characters): ";
    std::getline(std::cin, inputString);

    // Encode the input string using the custom substitution cipher
    std::string encodedString = encodeWithCustomCipher(inputString);

    // Print the encoded string
    std::cout << "Encoded string: " << encodedString << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
