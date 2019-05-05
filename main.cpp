#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //cout<<"please input the path:"<<endl;
    //char* P;
    //cin>>P;
    ifstream infile("D:\\qlp\\stringdata.txt");
    string temp;
    ofstream outfile("D:\\qlp\\outstringdata.txt",ios::app);
    if(!infile.is_open())
        cout<<"cannot open file!"<<endl;
    while(getline(infile,temp)){
        outfile<<temp;
        outfile<<endl;
    }
    infile.close();
    outfile.close();
    return 0;
}