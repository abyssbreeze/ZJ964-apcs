    #include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    int main(){
      // cin.sync_with_stdio(0) ;
      // cin.tie(0) ;

      int n ;
      int num ;
       int hfp = 0 ; //最高不及格分數
      int lpp = 100 ; //最低及格分數
      cin>>n ;
      int point[n] ;
      bool pass = false ;
      bool fail = false ;
      for(int i = 0 ; i<n ; ++i){
        cin>>num ;
        point[i] = num ;
        if(num>=60){
          pass = true ;
          if(num<lpp){
            lpp = num ;
          }
        }
        else{
          fail = true ;
          if(num>hfp){
            hfp = num ;
          }
        }
      }
      sort(point,point+n) ;
      for (int i = 0; i < n; i++)
      {
        cout<<point[i]<<" " ;
      }
      cout<<"\n" ;
      if(fail==false&&pass){
        cout<<"best case\n" ;     
      }
      else if(fail==true){
          cout<<hfp<<"\n" ;
        }
      if(fail&&pass==false){
        cout<<"worst case\n" ; 
      }
      else if(pass==true){
          cout<<lpp<<"\n" ;
        }

      return 0 ;
}