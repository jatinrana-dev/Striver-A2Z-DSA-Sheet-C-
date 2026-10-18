/*
 * Pattern-8
*********
 *******
  *****
   ***
    *

 * Source:  Striver A2Z Sheet 
 */

 class Solution {
public:
    void pattern8(int n) {
        for(int i=1;i<=n;i++){
            for(int k=1;k<=i-1;k++){
                cout<<" ";
            }
            for(int j=1;j<=2*(n-i)+1;j++){
                cout<<"*";
            }
            cout<<endl;

    }

    }
};