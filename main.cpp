#include<iostream>
#include<map>

using namespace std;


int main(){
    map<int,int>mp;
    int k,length,mth,muerto,newp;
    while ((cin>>k)&&k){

        if(mp[k]){
            cout<<mp[k]<<endl;
            continue;
        }
        length = k*2;

        for(mth=k; ;mth++){
            newp=length;
            muerto=(mth-1)%newp;
            while (muerto>=k && newp>=k){
                newp--;
                muerto = (muerto-1+mth)%newp;
            }
            if (newp==k){
                mp[k]=mth;
                break;
            }
        }
        cout << mth << endl;
    }
}