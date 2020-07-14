//Arrange an array such that all the elements smaller than x are at left of x and all the elements greater than x are on the right of x.

//1. Wrong approach
// void Arrange(vector<int> &v, int k)
// {
//   //Assuming K might or might not be present in the array.
//   int s = 0;
//   int e = n.size()-1;
//   while(s<e)
//   {
//     if(v[s]>=k && v[e]<=k )
//     {
//       //swap
//       int tmp = v[s];
//       v[s] = v[e];
//       v[e] = tmp;
//       s++;e--;
//     }
//     else if(v[s]<k)
//       s++;
//     else if(v[e]>k)
//       e--;    
//   }
//   return;
// }

//2.Correct

#include <bits/stdc++.h>
using namespace std;

//Arrange an array such that all the elements smaller than x are at left of x and all the elements greater than x are on the right of x.
void Arrange(vector<int> &v, int k)
{
  //Assuming K might or might not be present in the array.
  int lt = 0;
  for(int i = 0; i< v.size(); i++)
  {
    if(v[i]<k)
        lt++;
  }
  int s = 0;
  int e = v.size()-1;
  int m = lt;
  int i = 0;
  while(m<=e)
  {
    if(v[m]<k){
        swap(v[s],v[m]);
        s++;
    }
    else if(v[m]>k){
        swap(v[e],v[m]);
        e--;
    }
    else
    {
        m++;
    }
  }
  return;
}


int main() {
	// your code goes here
	vector<int> vec;
	vec.push_back(5);
	vec.push_back(4);

	vec.push_back(2);
	vec.push_back(1);

	vec.push_back(3);
	Arrange(vec, 3);
	
	for(int i=0;i<vec.size();i++)
	  cout<<" "<<vec[i];
	return 0;
}
