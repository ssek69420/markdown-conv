#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MarkDown{
  public:
    int identify = 0;

    void identifyTag(std::string text){
      std::string inpFullSTR;
      bool readingText = false;

      for(auto i : text){
        if(!readingText && i == '#'){
          identify += 1;
        }
        else if(!readingText && i == ' '){
          readingText = true;
        }
        else{
          readingText = true;
          inpFullSTR.push_back(i);
        }
      }

      if(identify == 1){
        std::cout << "<h1>" << inpFullSTR << "</h1>" << std::endl;
      }
      else if(identify == 2){
        std::cout << "<h2>" << inpFullSTR << "</h2>" << std::endl;
      }
      else if(identify == 3){
        std::cout << "<h3>" << inpFullSTR << "</h3>" << std::endl;
      }
    }
};

int main(){
  MarkDown mk;
  string inp; getline(cin, inp);
  mk.identifyTag(inp);
  return 0;
}
