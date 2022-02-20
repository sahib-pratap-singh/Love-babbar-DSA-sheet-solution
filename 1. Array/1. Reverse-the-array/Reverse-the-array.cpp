//Recursion
//Time complexity:O(N)
//Auxiliary space: O(N)
void reverse(int i, int n, char ch, string &str){
    if(i>=n){
        return;
    }
    ch=str[n-i-1];
    reverse(i+1,n,ch,str);
    str[i]=ch;
}
string reverseWord(string str){
    int i=0;
    int n=str.length();
    char ch;
    reverse(i,n,ch,str);
    return str;
}

//Time complexity: O(N)
//Space complexity: O(N)
string reverseWord(string str){
    string reverse="";
    for(int i=str.length()-1;i>=0;i--){
        reverse+=str[i];
    }
    return reverse;
}

//Using Two pointer approach
//Time complexity: O(sqrt(N))
//Space complexity: O(1)
string reverseWord(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

//Using inbuilt function
string reverseWord(string str){
    reverse(str.begin(),str.end());
    return str;
}