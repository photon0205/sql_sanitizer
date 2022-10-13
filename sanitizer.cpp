#include<iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;
    cout<<"username: ";
    getline(cin, username);
    cout<<"password: ";
    getline(cin, password);
    
                      
    for(int i=0;i<username.length(); i++){
        if(username[i]==' ' || username[i]=='\\' || username[i]=='\'' || (username[i] =='-' && username[i+1]=='-') || username[i]=='#' || username[i]=='"' || username[i]=='`'|| username[i]=='='|| username[i]=='-'|| username[i]=='('|| username[i]==')'|| username[i]=='{'|| username[i]=='}'|| username[i]=='/'|| username[i]==';'|| username[i]=='@'|| username[i]=='+'|| username[i]=='>'|| username[i]=='<'|| username[i]=='\n' || username[i]=='\t'|| username[i]=='.'){
            username.erase(i,1);
            i--;
        }
    }
    while(true){
        if(username.find("AND")!=string::npos){
            username.replace(username.find("AND"),3,"");
        }
        else if(username.find("OR")!=string::npos){
            username.replace(username.find("OR"),2,"");
        }
        else if(username.find("UNION")!=string::npos){
            username.replace(username.find("UNION"),5,"");
        }
        else if(username.find("SELECT")!=string::npos){
            username.replace(username.find("SELECT"),6,"");
        }else{
            break;
        }
    }
    cout<<"----------------------------------"<<endl<<"Your sanitized input is"<<endl<<"----------------------------------"<<endl<<"username: "<<username<<endl<<"password: "<<password<<endl;
    return 0;
}
