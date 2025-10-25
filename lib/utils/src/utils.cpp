#include "utils.h"

using namespace std;


bool iAlpha(string& str){
    return all_of(str.begin(),str.end(),[](char c){
        return isalpha(c);
    });
}

string removeBlanks(string& str){
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    return str;
}

bool checkString(const string& str, StringType type, string field){
    if(type == StringType::ALPHA_NOT_EMPTY){
        string strCopy{str};
        if(!strCopy.empty()){
            if(iAlpha(strCopy)){
                return true;
            }
            else{
                cout << "The " << field << " contains non-alphabetic characters" << endl;
            }
        }
        else{
            cout << "The " << field << " is empty" << endl;
        }
    }
    return false;
}