#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter size of array:\n";
	int n;	
	cin>>n;
	deque <int> deq;
	deque<int> :: iterator it = deq.begin();
	unordered_map <int,deque <int> :: iterator> m;
	//front will have the oldest element
	while(true)
	{
		cout<<"\n1.seek\n2.put\n3.Exit\n";
		int ch,ele=0;
		cin>>ch;
		if(ch==1)
		{
			cin>>ele;
			//seek can only be done if the element is already present 
			deq.erase(m[ele]);
			deq.push_back(ele);
			m[ele] = it;
			it++;
		}
		else if(ch==2)
		{
			cin>>ele;
			if(deq.size() == n)
				deq.pop_front();	
			deq.push_back(ele);
			m[ele]=it;
			it++;
		}	
		else
			break;
		for(auto itr = deq.begin(); itr != deq.end(); itr++)
		{
			cout<<*itr<<" ";
		}
	}
	return 0; 
}	

