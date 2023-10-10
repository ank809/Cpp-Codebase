    #include<iostream>
    using namespace std;
    class Node{
        public:
        int val;
        Node* prev;
        Node* next;
        Node* head;
        Node(){
            head=NULL;
            prev= NULL;
        }

        Node(int value){
            this->val= value;
           this->head=NULL;
        //    this->next=NULL;
           this->prev=NULL;
        }

        // inserting element in a node
        void insert(int value){
            Node* node= new Node(value);
            node->next=head;
            node->prev= NULL;
            if(head!=NULL){
                head->prev=node;
            }
            node=head;
                
        }

        void display(){
            Node* temp= head;
            while(temp!=NULL){
                cout<<temp->val<<" --> ";
                temp=temp->next;
            }
        }
        
    };
    int main(){
        Node* node= new Node();
        node->insert(12);
        node->insert(1);
        node->insert(13);
        node->insert(18);
        node->insert(17);
        node->insert(19);
        node->display();
        
    }
