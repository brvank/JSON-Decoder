#include <iostream>
using namespace std;

void addIndentation(int spaces){
  for(int j=0;j<spaces;j++){
    cout<<" ";
  }
}

int main() {
    string str, temp;
    while(cin>>temp){
//      if(temp == "`") break;
//      else
	  str += temp;
    }
    
    // cout<<"\nResult here ===>\n";
    
    int spaces = 0;
    int i= 0;
    while(i<str.length()){
      if(str[i] == '{' || str[i] == '['){
        cout<<str[i];
        spaces += 4;
        cout<<"\n";
        addIndentation(spaces);
      }else if(str[i] == '}' || str[i] == ']'){
        cout<<"\n";
        spaces -= 4;
        addIndentation(spaces);
        cout<<str[i];
      }else if(str[i] == ','){
        cout<<str[i];
        cout<<"\n";
        addIndentation(spaces);
      }else{
        cout<<str[i];
      }
      i++;
    }
    return 0;
}
