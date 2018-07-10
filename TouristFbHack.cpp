/*
The Facebook campus has N different attractions, numbered from 1 to N in decreasing order of popularity. The name of the ith attraction is Ai, a unique, non-empty string consisting of at most 20 characters. Each character is either a lowercase letter ("a".."z"), uppercase letter ("A".."Z"), or digit ("0".."9").

Alex enjoys visiting the campus repeatedly for tours (including the free food!). Each time he visits, he has time to see exactly K of the attractions. To decide which K he'll see, he sorts the N attractions in non-decreasing order of how many times he's already seen them before, breaking ties in decreasing order of popularity, and then chooses the first K attractions in the sorted list. In other words, he prioritizes seeing attractions which he's seen the fewest number of times previously, but also opts to see the most popular attractions out of the ones he's seen an equal number of times.

Alex has visited the Facebook campus V-1 separate times already, and is about to go for his Vth visit. Given that he's always followed the rules stated above, and that he'll continue to, he'd like to determine which K attractions he'll see on his Vth visit. He'd like to list them in decreasing order of popularity (in other words, in the same relative order as they appear in the given list of all N attractions).

Input
Input begins with an integer T, the number of campuses. For each campus, there is first a line containing the space-separated integers N, K, and V. Then, N lines follow. The ith of these lines contains the string Ai.

Output
For the ith campus, print a line containing "Case #i: " followed by K space-separated strings, the names of the attractions that Alex sees on his Vth visit, in decreasing order of popularity.

Constraints
1 = T = 80 
1 = K = N = 50 
1 = V = 1012 
Explanation of Sample
In the first case, Alex saw the LikeSign on his first visit and the Arcade on his second visit. On his third visit he sees the SweetStop as its the most popular of the attractions he hasn't yet seen.

In the third and fourth cases, Alex sees {LikeSign, Arcade, SweetStop} on his first visit, then {LikeSign, Arcade, SwagStore}, then {LikeSign, SweetStop, SwagStore}.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int ram=0;ram<t;ram++)
	{
		int n,k;
		long long v;
		cin>>n>>k;
		cin>>v;
		string ar[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		
		long long mul=k*(v-1);
		int divide=mul%n;
		
		int counter=0;
		string newA[k];
		for(int j=divide,z=0;j<n;j++,z++)
		{
				newA[z]=ar[j];
				counter++;
	
				if(counter==k)
				{
				break;
				}
					
				if(j==(n-1))
					{
			
						j=-1;
						continue;
					}
			}

		int flag=0;
		string nayi[k];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
			
				if(ar[i].compare(newA[j])==0)
				{	nayi[flag]=newA[j];
					flag++;
				
				}
			}
		}
		
		cout<<"Case #"<<ram+1<<": ";
		for(int i=0;i<k;i++)
		{
			cout<<nayi[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
