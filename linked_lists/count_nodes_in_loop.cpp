#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/**
  program to count the nodes within a loop, using fast and slow pointer.
  the idea is simple when fast and slow meet, it will be within the loop,
  slow will make another trip at which point it will have completed a lap
  around the loop again. 
*/

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int countNodesInLoop(Node *head){
  int counter = 0;
  Node *fast = head;
  Node *slow = head;

  while(fast and fast->next){
    fast = fast->next->next;
    slow = slow->next;
    // we found the loop
    if(fast == slow){
      counter++;
      slow = slow->next;
      /**
        we found the loop,
        slow will complete another lap
        until it finds fast again
        the number of nodes it traverses is the length of the 
        loop.
      */
      while(slow != fast){
        slow = slow->next;
        counter++;
      }
      return counter;
    }
  }


  return counter;
  
}