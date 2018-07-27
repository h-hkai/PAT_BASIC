#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
    int no;
    int morality;
    int ability;
    int sum;
};
bool compare(const student& s1,const student& s2){
    if(s1.sum>s2.sum) return true;
    else if(s1.sum==s2.sum&&s1.morality>s2.morality) return true;
    else if(s1.sum==s2.sum&&s1.morality==s2.morality&&s1.no<s2.no) return true;
    else return false;
}
int main(){
    int N,L,H,cnt=0;
    vector<student> v1,v2,v3,v4;
    cin>>N>>L>>H;
    for(int i=0;i<N;i++){
        student stu;
        cin>>stu.no>>stu.morality>>stu.ability;
        stu.sum=stu.morality+stu.ability;
        if(stu.ability>=L&&stu.morality>=L){
        cnt++;
        if(stu.ability>=H&&stu.morality>=H)
        v1.push_back(stu);
        else if(stu.morality>=H&&stu.ability<H) 
        v2.push_back(stu);
        else if(stu.ability<H&&stu.morality<H&&stu.morality>=stu.ability)
        v3.push_back(stu);
        else 
        v4.push_back(stu);    
        }
    }
    sort(v1.begin(),v1.end(),compare);
    sort(v2.begin(),v2.end(),compare);
    sort(v3.begin(),v3.end(),compare);
    sort(v4.begin(),v4.end(),compare);
    cout<<cnt<<endl; 
    for(auto itr=v1.begin();itr!=v1.end();itr++)  
       cout<<itr->no<<" "<<itr->morality<<" "<<itr->ability<<endl;  
    for(auto itr=v2.begin();itr!=v2.end();itr++)  
        cout<<itr->no<<" "<<itr->morality<<" "<<itr->ability<<endl; 
    for(auto itr=v3.begin();itr!=v3.end();itr++)  
        cout<<itr->no<<" "<<itr->morality<<" "<<itr->ability<<endl; 
    for(auto itr=v4.begin();itr!=v4.end();itr++)  
        cout<<itr->no<<" "<<itr->morality<<" "<<itr->ability<<endl;  
    return 0;
}
