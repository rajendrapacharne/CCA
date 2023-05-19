#include<bits/stdc++.h>

#define modulus 1000000007

using namespace std;


 

int main(){

    int test;cin>>test;

    for(int z=0;z<test;z++){

        int n;cin>>n;

        int a[n];

        for(int i=0;i<n;i++)    cin>>a[i];

        long long ans=0,left=0, right=n-1, lower_max = 0, upper_max= 0;

        while(left<=right){

            if(lower_max <= upper_max) {

if(a[left] > lower_max)

lower_max = a[left];

else

ans += (lower_max - a[left]);

++left;

    }

    else {

                if(a[right] > upper_max)

                upper_max = a[right];

                else

                ans += (upper_max - a[right]);

                --right;

            }

        }

        cout<<ans%modulus<<endl;

    }

}