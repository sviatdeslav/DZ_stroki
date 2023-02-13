#include <iostream>
#include <string>
#include <array>

using namespace std;

/*#4
 * int main(){
    std::string text;
    std::getline(std::cin,text);
    for(int i=0;i<text.length();i++)
        if((text[i]==' ') && (text[i+1]==' '))
                text.erase(text.find(' '),i);
    std::cout<<text;
    return 0;
}
*/

/*#8
 * int main()
{
    string sA,sB;
    std::getline(std::cin,sA);
    std::getline(std::cin,sB);
    for (int i=0;i<sB.length();i++)
         for (int u=0;u<sB.length();u++)
             if(sA[u]==sB[i])
                 sA.erase(u,1);
    std::cout<<sA;
    return 0;
}
*/

/*#17
 * int main(){
    std::array<string,5>dl;
    std::array<string,5>zam;
    int mindl=-1,maxdl=0,p=0;
    for (int i=0;i<5;i++){
        std::getline(std::cin,dl[i]);
        if (dl[i].length()>maxdl)
            maxdl=dl[i].length();
        if(mindl==-1)
            mind=dl[i].length();
        else if(dl[i].length()<mindl)
            mindl=dl[i].length();
    }
    for(int o=mindl;o<=maxdl;o++)
        for(int i=0;i<5;i++)
            if(dl[i].length()==o){
               zam[p]=dl[i];
               p++;
            }
    for(int i=0;i<5;i++)
        dl[i]=zam[i];
    return 0
}
*/

//#22
int main(){
    std::string text;
    std::getline(std::cin,text);
    while((text.find("/*")!=-1) && (text.find("*/")!=-1))
        text.erase(text.find("/*"),text.find("*/")- text.find("/*")+2);
    std::cout<<text;
    return 0;
}
