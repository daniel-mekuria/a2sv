#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        int length = 1;
        auto head2 = head;
        while (head2->next != NULL)
        {
            length++;
            head2 = head2->next;
        }

        ListNode *second_half = reverse(head, length - (length / 2) + 1);

        auto second_half2 = second_half;
        while (true&&second_half!=NULL)
        {

            if (head->val != second_half->val)
            {
                reverse(second_half2, 1);

                return false;
            }
            if (second_half->next == NULL)
            {
                break;
            }
            head = head->next;

            second_half = second_half->next;
        }
if(second_half2!=NULL)
        reverse(second_half2, 1);
        return true;
    }
    ListNode *reverse(ListNode *head, int half_head)
    {

        int node_count = 1;

        while (true)
        {

            ListNode *next_node, *last_node;

            if (node_count == half_head)
            {

                next_node = head->next;
                head->next = NULL;
                last_node = head;
                head = next_node;
            }

            else if (node_count > half_head)
            {

                next_node = head->next;
                head->next = last_node;
                last_node = head;
                head = next_node;
            }
            else
            {
                head = head->next;
            }

            node_count++;
            if (head == NULL || head == 0)
            {

                return last_node;
            }
        }
    }
};
