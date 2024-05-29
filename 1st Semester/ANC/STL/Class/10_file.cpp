#include<iostream>
#include<fstream>
#include<map>
#include<sstream>
using namespace std;

int main(){
/*
//OLDMAST.TXT
    //open file for writing
    ofstream outputFile("oldmast.txt");

    //check if file has opened successfully
    if(!outputFile.is_open()){
        cerr<<"Unable to open the file."<<endl;
        return 1;
    }

    //loop to get multiple inputs
    while(true){
        string str;
        cout<<"Enter A/C no & Balance(enter quit to stop):"<<endl;
        getline(cin,str);

        //check if the user wants to quit
        if(str == "quit"){
            break;
        }

    //write the string to file
    outputFile<<str<<endl;
    }

    //close the file
    outputFile.close();
    cout<<"Inputs have been written successfully"<<endl;

//*************************************************************/
/*
//TRANS.TXT
    //open file for writing
    ofstream outputFile2("trans.txt");

    //check if file has opened successfully
    if(!outputFile2.is_open()){
        cerr<<"Unable to open the file."<<endl;
        return 1;
    }

    //loop to get multiple inputs
    while(true){
        string str2;
        cout<<"Enter A/C no & Transaction(enter quit to stop):"<<endl;
        getline(cin,str2);

        //check if the user wants to quit
        if(str2 == "quit"){
            break;
        }

    //write the string to file
    outputFile2<<str2<<endl;
    }

    //close the file
    outputFile2.close();
    cout<<"Inputs have been written successfully"<<endl;




//***********************************************************************/
    //open file for reading
    ifstream inputFile("oldmast.txt");
    if(!inputFile.is_open()){
        cerr<<"Unable to open the file."<<endl;
        return 1;
    }

    //map to store
    map<int, double>balanceMap;

    //read the file line by line
    string line;
    while(getline(inputFile, line)){
        istringstream iss(line);
        int num1;
        double num2;
        //extract and cast the two numbers
        if(iss>>num1>>num2){
            //map the numbers
            balanceMap[num1]=num2;
        }
        else{
            cerr<<"Invalid input line: "<<line<<endl;
        }
    }
    //close file
    inputFile.close();

    //display
    cout<<'\t'<<"A/C No"<<'\t'<<"Balance Amount"<<endl;
    for(auto pair:balanceMap){
        cout<<'\t'<<pair.first<<'\t'<<pair.second<<endl;
    }

    return 0;
}