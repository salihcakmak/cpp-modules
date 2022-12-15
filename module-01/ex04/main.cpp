#include <iostream>
#include "FileReplacer.h"

int main(int ac, char *av[])
{
    if (ac < 4)
    {
        cout << "Please enter required arguments" << endl;
        return 1;
    }

    string fileName, s1, s2;
    fileName = av[1];
    s1 = av[2];
    s2 = av[3];
    if (fileName.empty() || s1.empty() || s2.empty())
    {
        cout << "Entered values are not empty" << endl;
        return 1;
    }

    FileReplacer fileReplacer(fileName, s1, s2);
    fileReplacer.replace();
    return 0;
}

/*
// A class to represent the file replacement program
class FileReplacer
{
public:
    FileReplacer(string filename, string s1, string s2)
            : m_filename(filename), m_s1(s1), m_s2(s2) {}

    // Replaces every occurrence of s1 in the input file with s2, and
    // writes the result to the output file
    void replace()
    {
        // Open the input file
        ifstream inputFile(m_filename);
        if (!inputFile.is_open())
        {
            cerr << "Error opening file " << m_filename << endl;
            return;
        }

        // Create the output file by appending ".replace" to the input filename
        string outputFilename = m_filename + ".replace";
        ofstream outputFile(outputFilename);
        if (!outputFile.is_open())
        {
            cerr << "Error creating file " << outputFilename << endl;
            return;
        }

        // Read the input file line by line
        string line;
        while (getline(inputFile, line))
        {
            // Replace every occurrence of m_s1 in the current line with m_s2
            size_t pos = 0;
            while ((pos = line.find(m_s1, pos)) != string::npos)
            {
                line.replace(pos, m_s1.length(), m_s2);
                pos += m_s2.length();
            }

            // Write the modified line to the output file
            outputFile << line << endl;
        }

        // Close the input and output files
        inputFile.close();
        outputFile.close();

        cout << "Done!" << endl;
    }

private:
    string m_filename;
    string m_s1;
    string m_s2;
};

int main()
{
    string filename, s1, s2;
    cout << "Enter filename: ";
    cin >> filename;
    cout << "Enter string s1: ";
    cin >> s1;
    cout << "Enter string s2: ";
    cin >> s2;

    // Create an instance of the FileReplacer class and call the replace method
    FileReplacer fileReplacer(filename, s1, s2);
    fileReplacer.replace();

    return 0;
}
*/