#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "log.h"

using namespace std;

// Default constructor
Log::Log() {}

// Parameterized constructor
Log::Log(const string& filename)
{
    logFile.open(filename, ios::app);
    
    if (!logFile.is_open()) {
        cerr << "Error opening log file." << endl;
    }
}

// Destructor
Log::~Log() { logFile.close(); }

// Logs a message with log action
void Log::log(LogAction action, const string& message)
{
    // Current timestamp
    time_t now = time(0);
    tm* timeinfo = localtime(&now);
    char timestamp[20];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", timeinfo);

    // Create log entry
    ostringstream logEntry;
    logEntry 
        << "[" << timestamp << "] " 
        << actionToString(action) << ": " << message 
        << endl;
    
    // Write inside log file
    if (logFile.is_open()) {
        logFile << logEntry.str();
        logFile.flush(); //  Immediately write to file
    }
}