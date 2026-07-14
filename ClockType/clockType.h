//
// Created by Sherif Ashraf on 7/14/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#ifndef H_clockType
#define H_clockType

class clockType
{
public:
    // Constructor with default parameters (serves as both default and parameterized constructor)
    clockType(int hours = 0, int minutes = 0, int seconds = 0);

    // Set the time after validation
    void setTime(int hours, int minutes, int seconds);

    // Retrieve the time via reference parameters
    void getTime(int& hours, int& minutes, int& seconds) const;

    // Print the time in hh:mm:ss format
    void printTime() const;

    // Increment functions
    void incrementHours();
    void incrementMinutes();
    void incrementSeconds();

    // Compare two clockType objects for equality
    bool equalTime(const clockType& otherClock) const;

private:
    int hr;  // Stores hours (0-23)
    int min; // Stores minutes (0-59)
    int sec; // Stores seconds (0-59)
};

#endif // H_clockType