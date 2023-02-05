#include<bits/stdc++.h>
using namespace std;

string crc(string data, string poly) {
    // string data = rem;
    int m = poly.length();
    for(int i=0; i<m-1; i++) {
        data.append("0");
    }
    int n = data.length();
    for(int i=0; i<n-m+1; i++) {
        if(data[i] == '1') {
            for(int j=0; j<m; j++) {
                if(data[i+j] == poly[j]) {
                    data[i+j] = '0';
                }
                else data[i+j] = '1';
            }   
        }
    }
    return data.substr(n-m+1);
}

int main() {
    string poly, data;
    cout << "Enter the Data: ";
    cin >> data;
    cout << "Enter the Checksum Divisor: ";
    cin >> poly;
    string rem = crc(data, poly);
    cout << "The generated codeword: " << data+rem << endl;
    string recv;
    cout << "Enter the received codeword: ";
    cin >> recv;
    if(recv == data+rem) {
        cout << "NO ERROR";
    }
    else cout<<"ERROR";
}