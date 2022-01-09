#include <iostream>
using namespace std;

int main() {
  // PATTERNS PROGRAMS

  // * * *
  // * * *
  // * * *
  // int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout<<"* ";
  //     j= j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;
  // }

  // =======================================

  // 1 1 1
  // 2 2 2
  // 3 3 3

  // int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<<i<<" ";
  //     j=j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;

  // }

// =============================================

  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4

  //  int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<<j<<" ";
  //     j=j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;

  // }

// ==================================================

  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1
  // int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<<n-j+1<<" ";
  //     j=j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;
  // }

  // 1 2 3 4
  // 5 6 7 8
  // 9 10 11 12
  // 13 14 15 16

  // int n;
  // cin>>n;
  // int i=1;
  // int count = 1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<<count<<" ";
  //     count = count + 1;
  //     j=j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;
  // }

  // ==================================================

  // *
  // * *
  // * * *
  // * * * *

  //  int n;
  // cin>>n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout<<"*"<<" ";
  //     j=j+1;
  //   }
  //   cout<<endl;
  //   i=i+1;
  // }

  // =============================================

  // 1 
  // 2 2
  // 3 3 3 
  // 4 4 4 4

  // int num;
  // cin>>num;

  // int row = 1;

  // while(row<=num){

  //   int col=1;
  //   while(col<=row){
  //     cout<<row<<" ";
  //     col = col +1;
  //   }
  //   cout<<endl;
  //   row = row + 1;
  // }

  // =============================================

  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10

//   int num;
//   cin>>num;
//  int row = 1;
//  int count=1;

//  while(row<=num){
//    int col = 1;
//    while(col<=row){
//       cout<<count<<" "; 
//      count = count + 1;
   
//      col = col+1;
//    }
//    cout<<endl;
//    row = row+1;
//  }

// =========================================

//  1
//  2 3
//  3 4 5
//  4 5 6 7
// int num;
// cin>>num;
// int row=1;

// while(row<=num){

//   int col = 1;
//   int value = row;
//   while(col<=row){
//     cout<<row<<" ";
//     value+=1;
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

//OR
// while(row<=num){

//   int col = 1;
  
//   while(col<=row){
//     cout<<row+col-1<<" ";
    
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// =============================================


// 1
// 2 1
// 3 2 1
// 4 3 2 1

// int num;
// cin>>num;
// int row=1;

// while(row<=num){

//   int col = 1;
 
//   while(col<=row){
//     cout<<row-col+1<<" ";
   
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ================================================

// A A A
// B B B
// C C C

// int num;
// cin>>num;
// int row=1;

// while(row<=num){

//   int col = 1;
 
//   while(col<=num){
//     char ch = 'A' + row - 1;
//     cout<<ch<<" ";
   
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ==============================================

// A B C
// A B C
// A B C

// int num;
// cin>>num;
// int row=1;

// while(row<=num){

//   int col = 1;
 
//   while(col<=num){
//     char ch = 'A' + col - 1;
//     cout<<ch<<" ";
   
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ===============================================

// A B C
// D E F
// G H I

// int num;
// cin>>num;
// int row=1;
// char start = 'A';
// while(row<=num){

//   int col = 1;
 
//   while(col<=num){
//     cout<<start<<" ";
//     start+=1;
   
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// =======================================

// A B C
// B C D
// C D E


// int num;
// cin>>num;
// int row=1;
// while(row<=num){

//   int col = 1;
 
//   while(col<=num){
//     char ch = 'A' + row + col - 2;
//     cout<<ch<<" ";
//   ;
   
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

//***************************************

// A
// B B
// C C C

// int num;
// cin>>num;
// char start = 'A';
// int row = 1;
// while(row<=num){
//   int col = 1;
//   while(col<=row){
//     cout<<start;
//      start +=1;
//     col+=1;
//   }
//   // start +=1;
//   cout<<endl;
//   row+=1;
// }

//***************************************

// A
// B C 
// C D E 
// D E F G

// int num;
// cin>>num;

// int row = 1;

// while(row<=num){
//   int col = 1;
//   while(col<=row){
//     char ch = 'A'+row+col-2;
//     cout<<ch<<" ";
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ==============================================

// D
// C D 
// B C D
// A B C D

// int num;
// cin>>num;

// int row = 1;
// while(row<=num){

//   int col = 1;
//    char start = 'A'+num-row;
//   while(col<=row){
//     cout<<start;
//     start+=1;
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// =================================================

// D
// C C
// B B B
// A A A A

// int num;
// cin>>num;

// int row=1;

// while(row<=num){
//   int col=1;
//   while(col<=row){
//     char start = 'A'+num-row;
//     cout<<start;
//     start+=1;
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ==================================================

//       *
//     * *
//   * * *
// * * * *  

// int num;
// cin>>num;

// int row=1;
// while(row<=num){
//   int space = num - row;
//   while(space){
//     cout<<" ";
//     space-=1;
//   }
//   int col=1;
//   while(col<=row){
//     cout<<"*";
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// =================================================

// * * * *
// * * *
// * *
// *

// int num;
// cin>>num;

// int row=1;
// while(row<=num){
//   int col=1;
//   while(col<=(num-row+1)){
//     cout<<"*";
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ====================================================

// * * * *
//   * * *
//     * *
//       *

// int num;
// cin>>num;

// int row=1;

// while(row<=num){
//   int space = row-1;
//   while(space){
//     cout<<" ";
//     space-=1;
//   }

//   int col=1;
//   while(col<=(num-row+1)){
//     cout<<"*";
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// ==================================================

// 1 1 1 1
//   2 2 2
//     3 3
//       4

// int num;
// cin>>num;

// int row=1;

// while(row<=num){
//   int space = row - 1;
//   while(space){
//     cout<<" ";
//     space-=1;
//   }
//   int col=1;
//   while(col<=(num-row+1)){
//     cout<<row;
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }

// =====================================================

//        1
//      2 2
//    3 3 3
//  4 4 4 4

// int num;
// cin>>num;

// int row=1;

// while(row<=num){
//   int space = num - row;
//   while(space){
//     cout<<" ";
//     space-=1;
//   }
//   int col=1;
//   while(col<=row){
//     cout<<row;
//     col+=1;

//   }
//   cout<<endl;
//   row+=1;

// }

// ===============================================

//    1
//   121
//  12321
// 1234321

// int num;
// cin>>num;

// int row=1;
// while(row<=num){
//   //print Spaces
//  int space = num - row;
//  while(space){
//    cout<<" ";
//    space-=1;
//  }

//   // print 2nd traingle
//   int col=1;
//   while(col<=row){
//     cout<<col;
//     col+=1;
//   }
//   // print 3rd traingle
//   int start = row-1;
//   while(start){
//     cout<<start;
//     start-=1;
//   }
//   cout<<endl;
//   row+=1;

// }

// ==============================================

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

// int num;
// cin>>num;

// int row=1;

// while(row<=num){
  
//  int col=1;
//   while(col<=(num-row+1)){
//     cout<<col;
//     col+=1;
//   }

//   //second trangle
//   col=2;
//   while(col<=row){
//     cout<<"*";
//     col+=1;
//   }

//  col=2;
//   while(col<=row){
//     cout<<"*";
//     col+=1;
//   }
//   col=num;
//    while(col){
//      if(col-row+1>0){
//       cout<<col-row+1;
//      }
    
//     col-=1;
//   }

//   cout<<endl;
//   row+=1;
// }



// 1 2 3 4
//   2 3 4
//     3 4
//       4

int num;
cin>>num;

int row=1;
while(row<=num){
  int space=row-1;
  while(space){
    cout<<" ";
    space-=1;
  }
  int col=1;
  while(col<=num-row+1){
    cout<<col;
    col+=1;
  }
  cout<<endl;
  row+=1;
}

//      1
//     23
//    456
//  78910

// int num;
// cin>>num;

// int row =1;
// int count=1;

// while(row<=num){
//   int space=num-row;
//   while(space){
//     cout<<" ";
//     space-=1;

//   }
//   int col=1;
//   while(col<=row){
//     cout<<count;
//     count+=1;
//     col+=1;
//   }
//   cout<<endl;
//   row+=1;
// }






} 