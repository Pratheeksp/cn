#include<bits/stdc++.h>

using namespace std;

int main()
{
    int queries, ip_rate, op_rate, b_size, size_left, storage=0;

    cout<<"Enter the maximum capacity/size of the bucket:"<<endl;
    cin>>b_size;
    cout<<"Enter the input rate:"<<endl;
    cin>>ip_rate;
    cout<<"Enter the output rate:"<<endl;
    cin>>op_rate;
    cout<<"How many times you want to run(number of queries):"<<endl;
    cin>>queries;

    for(int i=0;i<queries;i++)
    {
        size_left=b_size-storage;
        if(ip_rate<=size_left)
        {
            storage+=ip_rate;
        }
        else
        {
            cout<<"Packet loss:"<<ip_rate<<endl;
        }

        cout<<"Buffer size:"<<storage<<",out of:"<<b_size<<endl;
        storage-=op_rate;
    }
    
    return 0;
}