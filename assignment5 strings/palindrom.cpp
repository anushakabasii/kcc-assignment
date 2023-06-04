int main() {
    string a;
    cin>>a;
    string b;
    int i;
    for(i=a.size()-1;i>=0;i--){
        b.push_back(a[i]);
    }
    if(a==b)
        cout<<"palindrom";
    else
        cout<<"not palindrom";
}
