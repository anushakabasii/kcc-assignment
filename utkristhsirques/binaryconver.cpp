int main() {
    int number;
    cin>>number;
    vector<int>vec;
    for(int i=0;number!=0 && number!=1;i++){
        vec.push_back(number%2);
        number = number/2;
    }
    vec.push_back(number);
    for(int j=vec.size()-1;j>=0;j--){
        cout<<vec[j];
    }
}
