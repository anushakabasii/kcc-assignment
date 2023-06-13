class Solution{
  public:
    int isdivisible7(string num){
     int i=0;
     int y=0;
     for(i=0;i<sizeof(num);i++){
         y=y*10+num[i];
         
     }
     if (y%7==0){
         return 0;
     }
     else 
     return 1;
    }
};
