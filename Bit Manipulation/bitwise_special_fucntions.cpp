#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_on_or_off(int n,int k){
    return ((n>>k)&1);
}
void print_on_and_off_bits(int n){
    for(int i=0; i<7; i++){
        cout<<check_kth_bit_on_or_off(n,i)<<" ";
    }
    cout<<endl;
}
int turn_on_kth_bit(int n,int k){
    return (n|(1<<k));
}
int turn_off_kth_bit(int n,int k){
    return (n&(~(1<<k)));
}
int toggle(int n,int k){
    return (n^(1<<k));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<check_kth_bit_on_or_off(45,4)<<endl;
    // print_on_and_off_bits(45);
    // cout<<turn_on_kth_bit(45,4)<<endl;
    // cout<<turn_off_kth_bit(45,3);
    // cout<<toggle(45,2)<<endl;
    // cout<<__builtin_popcount(45)<<endl; //tells how many bits are on
    cout<<__lg(45)<<endl;

    
    return 0;
}