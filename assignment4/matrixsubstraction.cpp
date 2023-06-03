int main() {
    int n;
    cin>>n;
    int a[n][n],b[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cin>>a[r][c];
            cin>>b[r][c];
        }
    }
     for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cin>>b[r][c];
        }
    }

    
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<a[r][c]-b[r][c];
            cout<<" ";
        }
        cout<<endl;
    }
}
