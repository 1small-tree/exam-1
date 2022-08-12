#include <iostream>

using namespace std;

int sum_if_a_palindrome(int integers[],int length);

int sum_elements(int integers[],int length);

bool is_a_palindrome(int integers[],int length);

int sum_if_a_palindrome(int integers[],int length){

  if(length>0){

    if(is_a_palindrome(integers,length)){

      int s=sum_elements(integers,length);

      return s; //return sum of elements
}
else{
return -2;
}
else{
return -1; 
}
}
int sum_elements(int integers[],int length){
int sum=0;
for(int i=0;i<length;i++){
sum=sum+integers[i]; 
}
return sum; 

bool is_a_palindrome(int integers[],int length){
if(length>0){
int flag=0;
for(int i=0,j=length-1;i<length,j>=0;i++,j--){
if(integers[i]!=integers[j]){
flag++;
break;
}
}
if(flag==0){
return true; 
}else{
return false; 
}
else{
return false; 
}
}

int main()
{
int l=5; 
int arr[]={1,2,3,2,1}; 
int returnedValue=sum_if_a_palindrome(arr,l); 
if(returnedValue==-2) 
{
cout<<"The array is not palindrome";
}
else if(returnedValue==-1){ //if value==-1
cout<<"The length of array is less than 1";
}
else{ 
cout<<"The array is palindrome\n";
cout<<"The sum of elements of array : "<<returnedValue;
}
return 0;
}
