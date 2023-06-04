/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

bool detectCycle(Node *head)
{   
    if(head->next == NULL) return false;
    Node* hair = head;
    Node* tortoise = head;
	while(tortoise!=NULL && tortoise->next != NULL) {
        hair = hair->next;
        tortoise = tortoise->next->next;
        if(tortoise == hair) return true;
    }

    return false;
}
