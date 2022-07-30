#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int i = 0;
  int j = array.size() - 1;
  while (i < j) {
    // if the element is already in the wanted position skip
    while (i < j and array[j] == toMove) {
      j--;
    }
    // if the element at position i == toMove, swap with end index
    if (array[i] == toMove) {
      swap(array[i], array[j]);
    }
    i++;
  }
  return array;
}
