#include <stack>
int countBracketReversals(string input) {
	// Write your code here
	if(input.length()%2!=0){
		return -1;
	}
	stack <char>s;
	for(int i=0;i<input.length();i++){
          if (input[i] == '{') {
            s.push(input[i]);
          } else if (s.empty()){
			  s.push(input[i]);
		  }
		  else if(!s.empty()&&s.top()=='{'){
			  s.pop();
		  }
		  else if(!s.empty()&&s.top()!='{'){
			  s.push(input[i]);
		  }
    }
	char c1,c2;
	int c=0;
	while(!s.empty()){
		c1=s.top();
		s.pop();
		c2=s.top();
		s.pop();
		if(c1==c2){
			c++;
		}
		else{
			c+=2;
		}
	}
	return c;

}