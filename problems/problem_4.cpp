#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
std::string problemSolution4(const std::string &macAddress) {
    std::string result;
    // write your code here
        stringstream ss(macAddress);
        int firstOctet;
        char colon;
        ss >> hex >> firstOctet >> colon;
        if (ss && firstOctet == 0xFF) {
            result =  "Broadcast";
        }
        if (ss && firstOctet % 2 == 0) {
            result = "Unicast";
        } else if (ss) {
            result = "Multicast";
        }
    result = "Invalid";
    // make use of control flow statements
     return result;
}

