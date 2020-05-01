#include<iostream>
using namespace std;
int main(){
    int b[]={1,2,3};
    cout<<b<<endl; //it will print address by default and it is for every other datatype except character array
    char a[]={'a','b','c','d','e','\0','f'};//it will print elements till the null character so f will not get printed
       cout<<a<<endl; //it will print the elements unlike others

       //taking input in character array
       char s1[]={'h','e','l','l','o'};//doesnot terminate with a null
       char s2[]="hello";// it get terminated with a null value
       
       cout<<s1<<" "<<sizeof(s1)<<endl;//5 bytes
       cout<<s2<<" "<<sizeof(s2)<<endl;//6 bytes
            return 0;}
