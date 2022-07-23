#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* sortedMerge(Node* head1, Node* head2) {
  if(!head1) return head2;
  if(!head2) return head1;
  struct Node* ans;
  if(head1 < head2){
    ans = head1;
    ans->next = sortedMerge(head1->next, head2);
  }else{
    ans = head2;
    ans->next = sortedMerge(head1, head2->next);
  }
  return ans;
}

/*
  recursion tree representation for the following lists
  2->3->20
  5->10->15->40
  
             2
        arrow represents return value
        (3, 5) -> 3

    (20, 5) -> 5

          (20, 10) -> 10

               (20, 15) -> 15

                    (20, 40) -> 20 

            (NULL, 40) -> 40 

                
*/