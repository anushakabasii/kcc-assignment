int main() {
    string str="my name is anusha";
    int s=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            s=s+1;
        }
    }
    cout<<s;
}
