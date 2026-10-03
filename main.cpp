#include <iostream>  // to print smth (cout needed)
#include <vector>    // for create dynamic list etc
#include <string>    // string variables
#include <chrono>    // time calculations etc
#include <thread>    // to use the sleep function
struct Process {
    int pid;           // İşlem Kimliği (Sayı)
    std::string name;  // İşlem Adı (Yazı)
    std::string status;// Durumu (Yazı)
};
// a function to print a banner
void printBanner() {
    std::cout << "========================================\n";
    std::cout << "       C++ System Metrics Scanner       \n";
    std::cout << "========================================\n\n";
}
// a function to simulate scanning the system and printing process information
void scanSystem() {
    std::cout << "[*] Initializing System Scan...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
	// Simulate scanning processes
    std::cout << "[+] Architecture: x86_64 / ARM64\n";
    std::cout << "[+] Environment: Windows / Visual Studio 2022\n";
    std::cout << "[+] System Status: OPERATIONAL\n\n";
	// Simulated process list
    std::vector<Process> processes = {
        {101, "init_process", "RUNNING"},
        {102, "network_daemon", "SLEEPING"},
        {103, "sys_logger", "RUNNING"},
        {104, "memory_manager", "RUNNING"}
    };
	// Print process information
    std::cout << "PID\tProcess Name\t\tStatus\n";
    std::cout << "----------------------------------------\n";
    for (const auto& proc : processes) {
        std::cout << proc.pid << "\t" << proc.name << "\t\t" << proc.status << "\n";
    }
    std::cout << "\n[*] Scan Completed Successfully!\n";
}
// The main function to run the program
int main() {
    printBanner();
    scanSystem();
    return 0;
}
// This code is a simple C++ program that simulates scanning system metrics and printing process information. It uses standard libraries for input/output, dynamic arrays, strings, and threading to create a basic system scanner.
