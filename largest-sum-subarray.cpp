#include <iostream>
#include <limits.h>

int arr[] = {-2, -3, 4, -1, -2, 5, -3}, size = sizeof(arr) / sizeof(arr[0]);

int max(int a, int b) {
  if (a > b)
    return a;
  else if (a < b)
    return b;
  else
    return b;
}

int main() {
  int ans = INT_MIN, sum = 0;
  int start = -1, end = -1;
  for (int i = 0; i < size; i++) {
    if (sum == 0)
      start = end = i;

    sum += arr[i];

    if (sum < 0)
      sum = 0;
  
      ans = max(ans, sum);
      end++;
    
  }
  std::cout << ans << " " << start << " " << end << "\n\n";

  for ( int i = start ; i < end  ; i ++ )
    std :: cout << arr[i] <<  " " ;

  }