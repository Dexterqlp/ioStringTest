#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout<<"please input the path:"<<endl;
    string path;
    cin>>path;
    ifstream infile(path.c_str());
    string temp;
    ofstream outfile("D:\\qlp\\outstringdata.txt",ios::app);
    if(!infile){
        cout<<"cannot open file!"<<endl;
        return 0;
    }
    while(getline(infile,temp)){
        cout<<temp<<endl;
        outfile<<temp;
        outfile<<endl;
    }
    infile.close();
    outfile.close();
    return 0;
}