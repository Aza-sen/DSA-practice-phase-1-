#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>


using namespace std;
/* array
int main(){
    array<int,4> a={1,2,3,4};

    int s=a.size();

    cout<<s;
    cout<<a.at(2);
}*/



/*vectors(dynamic)
int main(){
    vector<int> v;
    vector<int> a(5,1);// fixed size vector with all intilized to 1
    vector<int> last(a);//new vector with a copied in it
    cout<<"size=>"<<v.capacity();//current size of vector it doubles its size after every iteration
    v.push_back(1);
    cout<<"size=>"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size=>"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size=>"<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(2);
    cout<<v.back;
    cout<<v.front;
    v.pop_back();
    for(int i:v){//method to print vector
        cout<<i;
    }



}*/

//   Deck  (operation from both end)(dynamic)
/*
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(0);
    for(int i:d){
        cout<<i<<" "; or d[i];

    }
    d.pop_back();
    d.pop_front();
    d.push_back(1);
    d.push_back(3);
    cout<<d.at(0);
    d.front();
    d.back();
    d.size();
    d.empty();
    d.erase(d.begin(),d.begin()+1);
    d.clear();

}*/

// list(doubly linked list)
/*
int main(){
    list<int> l;
    list<int> n(5,100); //new list which is 5 and all element 100
    l.push_back(1);
    l.push_front(2);
    for(int i:l){      //  see the size of the list and apply the for loop for that size
        cout<<i<<" "; 
    }
    l.erase(l.begin());
    l.size();




}
*/

// stack(LIFO)
/*
int main(){
    stack<string> s;
    s.push("Azhar");
    s.push("is");
    s.push("good");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    for(int i=0;i=s.size();i++){
        cout<<s.top();
        s.pop();
    }


    
}
*/

//Queue(FIFO)
/*
int main(){
    queue<string> q;
    q.push("azhar");
    q.push("is");
    q.push("good");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size();



}
*/
//priority queue(default Max heap)(fetching element is always maximum)
/*
int main(){
    priority_queue<int> max1;
    priority_queue<int,vector<int>,greater<int>> min1;
    max1.push(1);
    max1.push(2);
    max1.push(3);
    max1.push(4);
    int n=max1.size();//int size store karlo quaki size change hoti hai continously

    for(int i=0;i<=n;i++){ // print
        cout<<max1.top()<<" ";
        max1.pop();

    }
    cout<<endl;






}*/

//SET (the element does not repeat)(and the output is in sorted order)(use BST)
/*
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);


    for(int i:s){
        cout<<i<<endl;
    }
    s.erase(s.begin());

    cout<<s.count(5)<<endl; //check if th eno is present or not
    set<int>::iterator itr = s.find(5);// iterator means the position so i is the iterator in array and pointer is the iterator of set
    cout<<*itr;
    for( auto it=itr;it!=s.end;it++){
        cout<<it<<" ";

    }cout<<endl;




}*/

//ALGORITHMS
/*
int main(){
    vector<int> v;
    

    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(9);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    cout<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<lower_bound(v.begin(),v.end(),7)-v.begin();
    cout<<upper_bound(v.begin(),v.end(),7)-v.begin();
    int a=3,b=4;
    cout<<max(a,b)<<" "<<min(a,b);
    swap(a,b);//we could swap vector as well as list;
    string s="abcd";
    reverse(s.begin(),s.end());
    rotate(v.begin(),v.begin()+1,v.end());// 1367 to 3671
    sort(v.begin(),v.end());


    


    
    

}*/
int main(){
    vector<string> s={"a","b"};
    cout<<s.front();
    
    cout<<2%2;
}







