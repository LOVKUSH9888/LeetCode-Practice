// 206. Reverse Linked List
/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/

// NAive solution
// TC= O(N)
// SC= O(N)

// Iterative - Way ==By using three Pointer approach === *prev, *curr, *temp
// Reversively
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        // Initialize prev as NULL and curr as head
        ListNode *prev = NULL, *curr = head;

        // Traverse through the list
        while (curr != NULL)
        {
            // Store the next node of curr

            /*We don't declare temp at the start of the function because its value needs to be updated in every iteration of the while loop.*/
            /*If we declared temp at the start of the function, its value would remain constant throughout the execution of the function, and we would not be able to use it to store the changing next pointer of curr. Therefore, we declare temp inside the while loop so that it can be updated in each iteration and used to store the changing next pointer of curr.*/

            ListNode *temp = curr->next;
            // Reverse the link between curr and prev
            curr->next = prev;
            // Move prev and curr one step forward
            prev = curr;
            curr = temp;
        }
        // Return the new head of the reversed list
        return prev;
    }
};
