#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> ordered_set;

int main(int argc, char const *argv[])
{
  
  ordered_set ost;
  
  // ost.insert(1);  syntax to insert element
  // ost.insert(2); 
  // ost.insert(3);
  // ost.insert(4);
  
    

  cout<<*(ost.find_by_order(1))<<endl; //syntax to kth find element numbering from zero
 
}
