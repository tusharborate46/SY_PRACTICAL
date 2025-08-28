#include <iostream>
#include <string>
using namespace std;

// Function to get last octet of IP
int extractLastOctet(const string &ip) {
    int i = ip.length() - 1, value = 0, place = 1;
    while (i >= 0 && ip[i] != '.') {
        value = (ip[i] - '0') * place + value;
        place =place*10;
        i--;
    }
    return value;
}

int main() {
    int totalServers, totalRequests;

    cout << "Enter number of servers: ";
    cin >> totalServers;
    cout << "Enter number of requests: ";
    cin >> totalRequests;

    string assigned[100][100];   // server → list of requests
    int count[100] = {0};        // track load of each server

    cout << "\nEnter the request IPs:\n";
    for (int r = 0; r < totalRequests; r++) {
        string ip;
        cout << "Request " << r + 1 << ": ";
        cin >> ip;

        int lastPart = extractLastOctet(ip);
        int serverID = lastPart % totalServers;

        // assign request to server
        assigned[serverID][count[serverID]] = ip;
        count[serverID]++;

        cout << "Request '" << ip << "' goes to Server " 
             << serverID << "\n";
    }

    // summary
    cout << "\n=== Server Load Summary ===\n";
    for (int s = 0; s < totalServers; s++) {
        cout << "Server " << s << " handled " << count[s] << " request(s)";
        if (count[s] > 0) {
            cout << ": ";
            for (int j = 0; j < count[s]; j++) {
                cout << assigned[s][j];
                if (j < count[s] - 1) cout << ", ";
            }
        }
        cout << "\n";
    }

    return 0;
}
