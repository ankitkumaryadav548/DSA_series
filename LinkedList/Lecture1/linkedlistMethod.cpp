//Linkedlis Method => 

// linkedlis ll;
// ll.add(20);
// ll.addAthead(70);
// ll.delete(2);
// ll.insertAt(3,40);

//Limitation of linked list
// 1. In array if we have to access any element in array so we can access like arr[4] in T.C(1)  but in linked list if we have to acces ll(4) then we have to traverse till index then return idx in which T.C => 0(n) 
//except if getting element at index = 0 and index = n-1 => T.C => 0(1)



// | Operation            |    Array | Linked List |
// | -------------------- | -------: | ----------: |
// | **Access**           |  🟢 O(1) |     🔴 O(n) |
// | **Insert beginning** |  🔴 O(n) |     🟢 O(1) |
// | **Insert last**      | 🟢 O(1)* |   🟢 O(1)** |
// | **Insert index**     |  🔴 O(n) |     🔴 O(n) |
// | **Delete beginning** |  🔴 O(n) |     🟢 O(1) |
// | **Delete last**      | 🟢 O(1)* |     🔴 O(n) |
// | **Delete index**     |  🔴 O(n) |     🔴 O(n) |

// * Dynamic array/vector amortized.
// ** Linked list with a tail pointer.

