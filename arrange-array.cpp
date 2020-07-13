//Arrange an array such that all the elements smaller than x are at left of x and all the elements greater than x are on the right of x.

void Arrange(vector<int> &v, int k)
{
  //Assuming K might or might not be present in the array.
  int s = 0;
  int e = n.size()-1;
  while(s<e)
  {
    if(v[s]>=k && v[e]<=k )
    {
      //swap
      int tmp = v[s];
      v[s] = v[e];
      v[e] = tmp;
      s++;e--;
    }
    else if(v[s]<k)
      s++;
    else if(v[e]>k)
      e--;    
  }
  return;
}
