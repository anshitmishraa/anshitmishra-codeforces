#include <iostream>

using namespace std;

int main(){
	int s;
	cin>>s;

	string single_digit[]={"zero", "one", "two",  
                        "three", "four","five",  
                        "six", "seven", "eight", "nine"}; 

    string two_digit[]={"ten", "eleven", "twelve",  
                        "thirteen", "fourteen", 
                        "fifteen", "sixteen",  
                        "seventeen", "eighteen", "nineteen"};
	string ten_multiple[]={ "twenty", "thirty", "forty", "fifty", 
                          "sixty", "seventy", "eighty", "ninety"};
	if(s/10==0){
		cout<<single_digit[s];
	}
	else if(s/10==1){
		cout<<two_digit[s%10];
	}
	else{
		if(s%10==0){
			cout<<ten_multiple[s/10-2];
		}
		else{
			cout<<ten_multiple[s/10-2]<<"-"<<single_digit[s%10];
		}
	}
	
	return 0;
}
