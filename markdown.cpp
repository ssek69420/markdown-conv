#include <iostream>
#include <string>
#include <vector>
using namespace std;
class MarkDown{
  public:
    bool identify = false;
    void identifyTag(std::string text){
      std::string inpFullSTR;
      for(auto i : text){
        if(i == '#'){
          identify = true;
        }else{
         if(i != '#' && i != ' '){
          inpFullSTR.push_back(i);
          }
        }
      }
      if(identify){
          std::cout<<"<h1>"<<inpFullSTR<<"</h1>"<<endl;
        }
  }
};

int main(){
  MarkDown mk;
  string inp; getline(cin, inp);
  mk.identifyTag(inp);
  return 0;
}
