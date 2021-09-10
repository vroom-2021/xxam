#include<iostream>
using namespace std;
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
int main(){
    const char* b = "\u2588";
    const char* r ="\u2557";
    const char* br = "\u255A";
    const char* hr = "\u2554";
    const char* hl = "\u255D";
    const char* h = "\u2550";
    const char* v = "\u2551";
cout<<RED<<b<<b<<r<<"  "<<b<<b<<r<<" "<<b<<b<<b<<b<<b<<r<<"  "<<b<<b<<b<<r<<"   "<<b<<b<<b<<r<<b<<b<<b<<r<<"   "<<b<<b<<b<<r<<"\n"; 
cout<<br<<b<<b<<r<<b<<b<<hr<<hl<<b<<b<<hr<<h<<h<<h<<b<<b<<r<<b<<b<<b<<b<<r<<" "<<b<<b<<b<<b<<v<<b<<b<<b<<b<<r<<" "<<b<<b<<b<<b<<v<<"\n";
cout<<" "<<br<<b<<b<<b<<hr<<hl<<" "<<b<<b<<b<<b<<b<<b<<b<<b<<v<<b<<b<<hr<<b<<b<<b<<b<<hr<<b<<b<<v<<b<<b<<br<<b<<b<<b<<b<<hr<<b<<b<<v<<"\n";
cout<<" "<<b<<b<<hr<<b<<b<<r<<" "<<b<<b<<hr<<h<<h<<h<<b<<b<<v<<b<<b<<v<<br<<b<<b<<hr<<hl<<b<<b<<v<<b<<b<<v<<br<<b<<b<<hr<<hl<<b<<b<<v<<"\n";
cout<<b<<b<<hr<<hl<<br<<b<<b<<r<<b<<b<<v<<"   "<<b<<b<<v<<b<<b<<v<<" "<<br<<h<<hl<<" "<<b<<b<<v<<b<<b<<v<<" "<<br<<h<<hl<<" "<<b<<b<<v<<"\n";
cout<<br<<h<<hl<<"  "<<br<<h<<hl<<br<<h<<hl<<"   "<<br<<h<<hl<<br<<h<<hl<<"     "<<br<<h<<hl<<br<<h<<hl<<"     "<<br<<h<<hl<<"\n";
cout<<RESET;
cout<<"\n";

return 0;
} 
