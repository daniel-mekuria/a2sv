class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *last = new ListNode(-101);

        last->next = head; 

        ListNode *current = last; 

        while (current->next != NULL && current->next->next != NULL)
        {

            if (current->next->val == current->next->next->val)
            {

                ListNode *temp = current->next->next;
                while (temp != NULL && current->next->val == temp->val)
                {
                    ListNode *anthortemp = temp;
                    temp = temp->next;
                    delete anthortemp; 
                }
                current->next = temp;
            }
            else 
            {
                current = current->next;
            }
        }

        return last->next;
    }
};
