// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
 /*  
     cout<<"hello World !"<<endl;
     cout<<"hello Aastha !"<<endl;
        int x,y;
        cin>>x>>y ;
        cout<<"the value of x is : " <<x << " and y is :"<<y<<endl;
   variables 
    float,double ,long,long long 
    string ,getline, character 
    string s1,s2 ;
    cin>>s1>>s2;
    cout<<s1<<s2;
    return 0 ;  
   string vp ;
   getline(cin,vp);
   cout<<vp<<endl;*/

// char ch = 'h';
// cout<<ch<<endl;

 /*if else statements*/

//     int age ;
//     cin>>age ;
//     if(age>=18)
//     {
//         cout<<"your an adult";
//     }
//     else 
//     cout<<"your not an adult";
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     int gd;
//     cin>>gd;
//     if(gd<25){
//         cout<<"F"<<endl;
//     }
//     else if(gd<=44){
//         cout<<"E"<<endl;
//     }
//     else if(gd<=49){
//         cout<<"D"<<endl;
//     }
//     else if(gd<=59){
//         cout<<"C"<<endl;
//     }
//     else if(gd<=79){
//         cout<<"B"<<endl;
//     }
//     else if(gd<=100){
//         cout<<"A"<<endl;
//     }
    
//     return 0 ;

// }



// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     int age ;
//     cin>>age ;
//     if(age<18){
//         cout<<"not eligible for job";
//     }
// else if( age<=54){
//     cout<<"eligible for job";
// }
// else if(age<=57){
//     cout<<"eligible for job but retirement soon";
// }
// else 
// {
//     cout<<"retirement time";
// }
// return 0 ;
// }

// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//  int day ;
//  cin>>day ;
//  switch(day){
//     case 1 : 
//     cout<<"Monday";
//     break;
//     case 2 :
//     cout<<"Tuesday"; 
//     break;
//     case 3 :
//     cout<<"Wednesday"; 
//     break;
//     case 4 :
//     cout<<"Thursday"; 
//     break;
//     case 5 : 
//     cout<<"Friday";
//     break;
//     case 6 : 
//     cout<<"Saturday";
//     break;
//     case 7 : 
//     cout<<"Sunday";
//     break;
//  }
//  cout<<"check";
//  return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {  //1D array
//     int arr[5] ; 
//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
//     arr[5]+= 10 ;
//     cout<<arr[5];
//     return 0 ;
// }

// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     for(int i=6 ;i>0;i--){ // reverse for loop 
//         cout<<"Hello  Vipul ji !"<<endl;
//     }
// }

// to use while loop 
// #include <iostream>
// using namespace std ;
// int main(){
//     int i = 1 ;
//     while(i<25){
//         cout<<"HEY THERE !"<<i<<endl;
//         i++;
//     }
//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int main()
// {
//     int i =10 ;
//     do{
//         cout<<"do while loop";
//         i++;
//     } while (i>=12);
//     cout<<i<<endl;
// }

//functions 
    // #include <iostream>
    // using namespace std ;

    // void printName(string name){
    //     cout<<"hey"<<name;
    // }
    // int main()
    // {
    //     string name ;
    //     cin>>name ;
    //     printName(name);
    //     return 0 ;
    // }


    #include<bits/stdc++.h>
    using namespace std ;
    int sum(int a ,int b )
     {
        int c = a + b ;
        return c ;
     }
    
    
    int main()
    {
        int a,b,c ;
        cin>>a>>b;
        int res =sum(a,b);
        cout<<res<<endl;
        

    }