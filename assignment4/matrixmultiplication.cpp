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
  int p[n][n];
    for (int r= 0; r < n; r++) {
        for (int c= 0; c < n; c++) {
            p[r][c] = 0;
            for (int k = 0; k < n; k++) {
                p[r][c] += a[r][k] * b[k][c];
            }
        }
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<p[r][c];
            cout<<" ";
        }
        cout<<endl;
    }
}
